import java.util.Scanner;

class Matrix {
    private int matrix[][];
    private int hang;
    private int cot;

    public Matrix(int m, int n) {
        this.hang = m;
        this.cot = n;
        this.matrix = new int[m][n];
    }

    public void setVal(int hang, int cot, int val) {
        matrix [hang][cot] = val;
    }

    public void nextMatrix(Scanner sc){
        for (int i = 0;i < hang; i++) {
            for (int j = 0; j < cot; j++) {
                matrix[i][j] = sc.nextInt();
            }
        }
    }

    public int getCot() {
        return cot;
    }

    public int getHang() {
        return hang;
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < hang; i++) {
            for (int j = 0; j < cot; j++) {
                sb.append(matrix[i][j]);
                if (j < cot - 1) {
                    sb.append(" ");
                }
            }
            if (i < hang - 1) {
                sb.append("\n");
            }
        }
        return sb.toString();
    }

    public Matrix mul(Matrix b) {
        int n = hang;
        int m = cot;
        int p = b.getCot();
        Matrix c = new Matrix(n, p);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < p; j++) {
                for (int k = 0; k < m; k++) {
                    c.matrix[i][j] += (this.matrix[i][k] * b.matrix[k][j]);
                }
            }
        }
        return c;
    }
}

public class b1 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), m = sc.nextInt(), p = sc.nextInt();
        Matrix a = new Matrix(n,m);
        a.nextMatrix(sc);
        Matrix b = new Matrix(m,p);
        b.nextMatrix(sc);
        System.out.println(a.mul(b));
    }
}
