#include<bits/stdc++.h>
using namespace std;

const int maxn = 100;
int n;
int nx, yx;
int x[maxn], y[maxn];
char map2D[maxn][maxn];

int compress(int a[maxn], int n) {
	int t[maxn];
	memcpy(t, a, sizeof t);
	sort(t, t + n);
	int sizeT = unique(t, t + n) - t;
	for (int i = 0; i < n; i++) {
		a[i] = (lower_bound(t, t + sizeT, a[i]) - t);
	}
	return sizeT;
}

struct Point {
	int x, y;
	int dist;
};

int main() {
	cin >> n;
	for (int i = 0; i < n + 2; i++) {
		cin >> x[i] >> y[i];
	}
	nx = compress(x, n + 2);
	yx = compress(y, n + 2);
	vector<Point> row[n];
	vector<Point> col[n];
	for (int i = 1; i < n + 2; i++) {
		row[x[i]].push_back({ x[i], y[i], 0 });
		col[y[i]].push_back({ x[i], y[i], 0 });
	}
	int r[maxn] = {0};
	int c[maxn] = {0};
	queue<Point> q;
	q.push({ x[0], y[0], 0 });
	int ans = 0;
	while(!q.empty()){
		auto cur = q.front();
		q.pop();
		if(cur.x == x[1] && cur.y == y[1]){
			ans = cur.dist;
			break;
		}
		if(!r[cur.x]){
			r[cur.x] = 1;
			for(auto& x : row[cur.x]){
				if (!c[x.y]) {
					x.dist = cur.dist + 1;
					q.push(x);
				}
			}
		}
		if(!c[cur.y]){
			c[cur.y] = 1;
			for(auto& y : col[cur.y]){
				if(!r[y.x]){
					y.dist = cur.dist + 1;
					q.push(y);
				}
			}
		}
	}
	cout << ans - 1 << endl;
}