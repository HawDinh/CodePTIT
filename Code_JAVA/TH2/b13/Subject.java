class Subject {

    public static int NUM = 1;
    public String ID, lecturerName, subjectName;

    public Subject(String lecturerName, String subjectName) {
        this.ID = String.format("DT%03d", NUM++);
        this.lecturerName = lecturerName;
        this.subjectName = subjectName;
    }
}