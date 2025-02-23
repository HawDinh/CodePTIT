package TH2.b4;

class Pair {
    private int p1;
    private int p2;

    public Pair(int p1, int p2) {
        this.p1 = p1;
        this.p2 = p2;
    }

    @Override
    public String toString() {
        return "(" + p1 + "," + p2 + ")";
    }
    
}