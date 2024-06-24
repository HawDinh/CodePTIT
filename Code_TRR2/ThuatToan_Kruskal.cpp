#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Hàm tìm tập cha của một đỉnh
int findParent(int vertex, vector<int>& parent) {
    return parent[vertex] == -1 ? vertex : findParent(parent[vertex], parent);
}

// Hàm tìm cây khung nhỏ nhất bằng thuật toán Kruskal
pair<vector<pair<int, int>>, int> KruskalMST(vector<pair<int, pair<int, int>>>& edges, int V) {
    vector<int> parent(V, -1); // Lưu trữ tập cha của mỗi đỉnh
    vector<pair<int, int>> mst; // Danh sách cạnh của cây khung nhỏ nhất
    int mst_weight = 0; // Trọng số của cây khung nhỏ nhất

    // Sắp xếp các cạnh theo thứ tự giảm dần của trọng số
    sort(edges.begin(), edges.end(), greater<pair<int, pair<int, int>>>());

    // Lặp qua từng cạnh
    for (auto edge : edges) {
        int src = edge.second.first;
        int dest = edge.second.second;
        int weight = edge.first;

        // Tìm tập cha của nguồn và đích
        int src_parent = findParent(src, parent);
        int dest_parent = findParent(dest, parent);

        // Nếu hai đỉnh không thuộc cùng một tập cha, thêm cạnh vào cây khung
        if (src_parent != dest_parent) {
            mst.push_back({src, dest});
            mst_weight += weight;
            parent[src_parent] = dest_parent; // Gộp hai tập cha lại với nhau
        }
    }

    // Kiểm tra xem cây khung có liên thông hay không
    if (mst.size() != V - 1) {
        return {{}, -1}; // Đồ thị không liên thông
    }

    return {mst, mst_weight};
}

// Hàm nhập ma trận kề từ người dùng
vector<vector<int>> nhapMaTranKe(int V) {
    vector<vector<int>> graph(V, vector<int>(V, 0));

    cout << "Nhập ma trận kề của đồ thị:" << endl;
    for (int i = 0; i < V; ++i) {
        for (int j = 0; j < V; ++j) {
            cin >> graph[i][j];
        }
    }

    return graph;
}

int main() {
    int V; // Số lượng đỉnh của đồ thị
    cout << "Nhập số lượng đỉnh của đồ thị: ";
    cin >> V;

    vector<vector<int>> graph = nhapMaTranKe(V);

    vector<pair<int, pair<int, int>>> edges; // Danh sách các cạnh của đồ thị

    // Tạo danh sách các cạnh từ ma trận kề
    for (int i = 0; i < V; ++i) {
        for (int j = i + 1; j < V; ++j) {
            if (graph[i][j] != 0) {
                edges.push_back({graph[i][j], {i, j}});
            }
        }
    }

    // Tìm cây khung nhỏ nhất và in kết quả
    pair<vector<pair<int, int>>, int> result = KruskalMST(edges, V);
    if (result.second == -1) {
        cout << "Đồ thị không liên thông." << endl;
    } else {
        cout << "Cây khung nhỏ nhất của đồ thị là:" << endl;
        for (auto edge : result.first) {
            cout << edge.first << " - " << edge.second << endl;
        }
        cout << "Trọng số của cây khung nhỏ nhất là: " << result.second << endl;
    }

    return 0;
}
