package bai1;

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

    public void SortCol(int cot) {
        for (int i = 0; i < this.hang - 1; i++) {
            for (int j = i + 1; j < this.hang; j++){
                if (matrix[i][cot] > matrix[j][cot]) {
                    int tmp = matrix[i][cot];
                    matrix[i][cot] = matrix[j][cot];
                    matrix[j][cot] = tmp;
                }
            }
        }
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
}
