package com.example.BTL_Nhom7_OOP.service;

import com.example.BTL_Nhom7_OOP.dto.response.AppointmentDTO;
import com.example.BTL_Nhom7_OOP.entity.Appointment;
import com.example.BTL_Nhom7_OOP.entity.Doctor;
import com.example.BTL_Nhom7_OOP.exception.ResourceNotFoundException;
import com.example.BTL_Nhom7_OOP.repository.AppointmentRepository;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.security.access.prepost.PreAuthorize;
import org.springframework.stereotype.Service;

import java.time.LocalDateTime;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;
import java.util.stream.Collectors;

@Service
public class AppointmentService {
    private final Queue<Integer> appointmentQueue = new LinkedList<>();

    @Autowired
    private AppointmentRepository appointmentRepository;

    @Autowired
    private DoctorService doctorService;

    //đặt lịch hẹn
    @PreAuthorize("hasAuthority('ADMIN')")
    public Appointment createAppointment(Appointment appointment) {
        appointment.setStatus("Scheduled");
        return appointmentRepository.save(appointment);
    }

    //Tìm lịch theo id
    @PreAuthorize("hasAuthority('ADMIN')")
    public Appointment getAppointment(int id) {
        return appointmentRepository.findById(id)
                .orElseThrow(() -> new ResourceNotFoundException("Không thấy lịch đặt"));
    }

    //lấy danh sách các cuộc hẹn đã đặt
    @PreAuthorize("hasAuthority('ADMIN')")
    public List<Appointment> getAllAppointments() {
        List<Appointment> appointments = appointmentRepository.findAll();
        if (appointments.isEmpty()) {
            throw new RuntimeException("Không tìm thấy lịch đặt");
        }
        return appointments;
    }

    //lấy danh sách các cuộc hẹn đã đặt theo tên
    @PreAuthorize("hasAuthority('ADMIN')")
    public List<AppointmentDTO> getAllAppointmentsByName(String name) {
        List<Appointment> appointments = appointmentRepository.findAllByOwnerName(name);
        if (appointments.isEmpty()) {
            throw new RuntimeException("Không tìm thấy lịch đặt");
        }
        return appointments.stream().map(AppointmentDTO::fromEntity).collect(Collectors.toList());
    }

    //lấy danh sách các cuộc hẹn đã đặt theo ngày
    @PreAuthorize("hasAuthority('ADMIN')")
    public List<AppointmentDTO> getAllAppointmentsByDate(String date) {
        LocalDateTime selectedDate = (date != null) ? LocalDateTime.parse(date) : LocalDateTime.now();
        List<Appointment> appointments = appointmentRepository.findAllByAppointmentDateTime(selectedDate);

        return appointments.stream().map(AppointmentDTO::fromEntity).collect(Collectors.toList());
    }

    //lễ tân check in
    @PreAuthorize("hasAuthority('ADMIN')")
    public Appointment checkInAppointment(int appointmentId) {
        Appointment appointment = appointmentRepository.findById(appointmentId)
                .orElseThrow(() -> new ResourceNotFoundException("Không tìm thấy cuộc hẹn với ID: " + appointmentId));

        // Kiểm tra trạng thái cuộc hẹn
        if ("Checked In".equals(appointment.getStatus())) {
            throw new IllegalStateException("Cuộc hẹn đã được check-in trước đó.");
        }

        // Cập nhật trạng thái thành "Checked In"
        appointment.setStatus("Checked In");
        return appointmentRepository.save(appointment);
    }

    // Nạp các hồ sơ "Checked In" vào hàng đợi
    public void loadAppointmentsToQueue() {
        List<Appointment> appointments = appointmentRepository.findAllByStatus("Checked In");
        for (Appointment appointment : appointments) {
            appointmentQueue.add(appointment.getId());
        }
    }

    // Lấy hồ sơ tiếp theo cho bác sĩ từ hàng đợi
    @PreAuthorize("hasAuthority('ADMIN')")
    public Appointment getNextAppointmentForDoctor(int doctorId) {
        Doctor doctor = doctorService.getDoctorById(doctorId);
        if (!"Free".equals(doctor.getStatus())) {
            throw new ResourceNotFoundException("Không có bác sĩ nào rảnh");
        }
        loadAppointmentsToQueue();
        Integer appointmentId = appointmentQueue.poll(); // Lấy ID đầu tiên trong hàng đợi
        if (appointmentId == null) {
            throw new IllegalStateException("Không có hồ sơ nào đang chờ.");
        }

        // Lấy thông tin hồ sơ từ DB
        Appointment appointment = getAppointment(appointmentId);

        // Cập nhật trạng thái và gắn bác sĩ xử lý
        appointment.setStatus("In Progress");
        doctor.setStatus("Busy");
        appointment.setDoctor(doctor);
        return appointmentRepository.save(appointment);
    }

    // Khi bác sĩ hoàn thành xử lý
    @PreAuthorize("hasAuthority('ADMIN')")
    public void completeAppointment(int appointmentId) {
        Appointment appointment = getAppointment(appointmentId);
        appointment.setStatus("Completed");
        Doctor doctor = doctorService.getDoctorById(appointment.getDoctor().getId());
        doctor.setStatus("Free");
        appointmentRepository.save(appointment);
    }

    //Lấy danh sách tất cả các cuộc hẹn đã hoàn thành thăm khám
    @PreAuthorize("hasAuthority('ADMIN')")
    public List<Appointment> getAllAppointmentsCompleted() {
        return appointmentRepository.findAllByStatus("Completed");
    }

}
