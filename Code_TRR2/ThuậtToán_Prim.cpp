#include <iostream>
#include <vector>
#include <climits>

using namespace std;

// Hàm tìm đỉnh có cạnh nhỏ nhất từ V đến VH
int findMinEdge(int V, vector<int>& dist, vector<bool>& visited) {
    int min_dist = INT_MAX, min_index;

    for (int v = 0; v < V; ++v) {
        if (!visited[v] && dist[v] < min_dist) {
            min_dist = dist[v];
            min_index = v;
        }
    }

    return min_index;
}

// Hàm tìm cây khung nhỏ nhất bằng thuật toán Prim
void PrimMST(vector<vector<int>>& graph) {
    int V = graph.size(); // Số lượng đỉnh của đồ thị
    vector<int> parent(V, -1); // Lưu trữ tập cha của mỗi đỉnh
    vector<int> dist(V, INT_MAX); // Lưu trữ khoảng cách tới cây khung nhỏ nhất
    vector<bool> visited(V, false); // Đánh dấu các đỉnh đã được thăm

    dist[0] = 0; // Khởi tạo đỉnh 0 làm gốc và khoảng cách đến cây khung nhỏ nhất là 0

    // Duyệt qua từng đỉnh để tìm cây khung nhỏ nhất
    for (int count = 0; count < V - 1; ++count) {
        int u = findMinEdge(V, dist, visited); // Chọn đỉnh u có cạnh nhỏ nhất

        visited[u] = true; // Đánh dấu đỉnh u đã được thăm

        // Cập nhật khoảng cách từ u đến các đỉnh chưa được thăm và là hàng xóm của u
        for (int v = 0; v < V; ++v) {
            if (graph[u][v] && !visited[v] && graph[u][v] < dist[v]) {
                parent[v] = u;
                dist[v] = graph[u][v];
            }
        }
    }

    // In cây khung nhỏ nhất và trọng số tương ứng
    cout << "Cây khung nhỏ nhất của đồ thị là:" << endl;
    for (int i = 1; i < V; ++i) {
        cout << parent[i] << " - " << i << endl;
    }
}

int main() {
    int V; // Số lượng đỉnh của đồ thị
    cout << "Nhập số lượng đỉnh của đồ thị: ";
    cin >> V;

    vector<vector<int>> graph(V, vector<int>(V)); // Ma trận kề của đồ thị

    cout << "Nhập ma trận kề của đồ thị:" << endl;
    for (int i = 0; i < V; ++i) {
        for (int j = 0; j < V; ++j) {
            cin >> graph[i][j];
        }
    }

    // Tìm cây khung nhỏ nhất và in kết quả
    PrimMST(graph);

    return 0;
}
