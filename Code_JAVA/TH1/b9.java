import java.io.*;
import java.util.*;

class Student implements Comparable<Student> {

    public String name;
    public int ac, sub;

    public Student(String name, int ac, int sub) {
        this.name = name;
        this.ac = ac;
        this.sub = sub;
    }

    @Override
    public int compareTo(Student other) {
        if (this.ac == other.ac) {
            if (this.sub == other.sub) {
                return this.name.compareTo(other.name);
            }
            return this.sub - other.sub;
        }
        return -(this.ac - other.ac);
    }

    @Override
    public String toString() {
        return name + " " + ac + " " + sub;
    }
}

public class b9 {

    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("LUYENTAP.in"));
        ArrayList<Student> students = new ArrayList<>();
        int n = sc.nextInt();
        while (n-- > 0) {
            sc.nextLine();
            String name = sc.nextLine();
            int ac = sc.nextInt();
            int sub = sc.nextInt();
            Student student = new Student(name, ac, sub);
            students.add(student);
        }

        Collections.sort(students);
        for (Student i : students) {
            System.out.println(i);
        }
    }
}

/*
 * Cổng lập trình trực tuyến của Học viện Công nghệ Bưu chính Viễn thông sẽ xếp hạng các sinh viên luyện tập lập trình để có cơ sở đánh giá kết quả môn học .

Mỗi sinh viên có họ tên, số bài làm đúng, tổng số lượt submit.

Hãy sắp xếp danh sách sinh viên theo tiêu chí sau:

Sinh viên có số bài làm đúng nhiều hơn được xếp trước, nếu có cùng số bài làm đúng thì ưu tiên sinh viên có số lượt submit ít hơn.
Sinh viên có cùng hạng, sắp xếp họ tên theo thứ tự từ điển.
Input - file văn bản LUYENTAP.in

Dòng đầu tiên trong file ghi số sinh viên (không quá 100).

Thông tin về mỗi sinh viên được ghi trong 2 dòng:

Dòng thứ nhất là họ tên của sinh viên đã được chuẩn hóa (độ dài không quá 100)
Dòng thứ hai ghi 2 số nguyên dương là số bài làm đúng và tổng số lượt submit (các số không quá 109)
Output

In ra danh sách sinh viên đã được sắp xếp, mỗi sinh viên ghi trên một dòng gồm 3 thông tin: họ tên, số bài làm đúng, tổng số lượt submit. 

Ví dụ

Input - file văn bản LUYENTAP.in

Output:

2
Nguyen Van Nam
168 600
Tran Thi Ngoc
168 600

Nguyen Van Nam 168 600
Tran Thi Ngoc 168 600

 */