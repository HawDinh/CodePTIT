#include<bits/stdc++.h>

using namespace std;

int parent[100005],n;
int Find(int u){
	if (u==parent[u]) return u;
	else return parent[u]=Find(parent[u]);
}
int main(){
	cin >> n;
	for (int i=1;i<=100000;i++){
		parent[i]=i;
	}
	for (int i=1;i<=n;i++){
		int u,v;
		cin >> u >> v;
		int c;
		u=Find(u);
		v=Find(v);
		cin >> c;
		if (c==1) {
			if (u!=v){
				parent[v]=u;
			}
		}
		if (c==2){
			if (u==v) cout << "1\n";
			else cout << "0\n";
		}
	}
}