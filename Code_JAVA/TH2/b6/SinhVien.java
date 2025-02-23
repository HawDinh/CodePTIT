public class SinhVien implements Comparable<SinhVien> {
    private String Ten;
    private int AC,Sub;

    public SinhVien(String Ten, int AC, int Sub){
        this.Ten = Ten;
        this.AC = AC;
        this.Sub = Sub;
    }
    
    public String toString() {
        return Ten + " " + AC + " " + Sub;
    }

    public int compareTo(SinhVien a) {
        if (this.AC != a.AC) {
            return a.AC - this.AC;
        }
        else {
            if (this.Sub != a.Sub) {
                return this.Sub - a.Sub;
            }
            else {
                return this.Ten.compareTo(a.Ten);
            }
        }
    }

}
