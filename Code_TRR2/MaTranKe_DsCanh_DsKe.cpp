// Đinh Hữu Minh B22DCCN526
// bài tập bài 4 trang 27 TRR2
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void MaTranKeSangDanhSachCanh(string filein,string fileout){
    ifstream in(filein);
    ofstream out(fileout);

    set <pair<int, int>> DsCanh;
    int ok[1001]={1};

    int n; in >> n;

    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            int x;
            in >> x;
            if (x==1 && DsCanh.find({i,j})==DsCanh.end() && DsCanh.find({j,i})==DsCanh.end()) 
            DsCanh.insert({i,j});
        }
    }

    in.close();

    out << n << " " << DsCanh.size() << endl;

    for (auto x:DsCanh) out << x.first << " " << x.second << endl;
    out.close();
}

void MaTranKeSangDanhSachKe(string filein, string fileout){
    ifstream in(filein);
    ofstream out(fileout);
    int m;
    in >> m;
    out << m << endl;
    int a[101][101]={0};
    int dem[101];
    
    for (int i=1;i<=m;i++){
        for (int j=1;j<=m;j++){
            in >> a[i][j];
            if (a[i][j]) ++dem[i];
        }
    }

    for (int i=1;i<=m;i++){
        out << dem[i] << " ";
        for (int j=1;j<=m;j++){
            if (a[i][j]==1) out << j << " ";
        }
        out << endl;
    }

    in.close();
    out.close();
}

void DanhSachCanhSangMaTranKe(string filein, string fileout){
    ifstream in(filein);
    ofstream out(fileout);

    int n,k;
    in >> n >> k;
    out << n << endl;
    int a[101][101]={0};

    for (int i=1;i<=k;i++){
        int x,y;
        in >> x >> y;
        a[x][y]=1;
        a[y][x]=1;
    }

    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++) out << a[i][j] << " ";
        out << endl;
    }
}

void DanhSachCanhSangDanhSachKe(string filein, string fileout){
    ifstream in(filein);
    ofstream out(fileout);

    int n,k;
    in >> n >> k;
    out << n << endl;
    int a[101][101]={0};
    int dem[101];

    for (int i=1;i<=k;i++){
        int x,y;
        in >> x >> y;
        a[x][y]=1;
        a[y][x]=1;
        ++dem[x];
    }

    for (int i=1;i<=n;i++){
        out << i << " ";
        for (int j=1;j<=n;j++){
            if (a[i][j]) out << j << " ";
        }
        out << endl;
    }
}

void DanhSachKeSangMaTranKe(string filein, string fileout){
    ifstream in(filein);
    ofstream out(fileout);

    int n; in >> n;
    out << n << endl;
    int a[101][101];

    for (int i=1;i<=n;i++){
        int m;
        in >> m;
        for (int j=1;j<=m;j++){
            int x;
            in >> x;
            a[i][x]=1;
            a[x][i]=1;
        }
    }

    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            out << a[i][j] << " ";
        }
        out << endl;
    }
}

void DanhSachKeSangDanhSachCanh(string filein, string fileout){
    ifstream in(filein);
    ofstream out(fileout);

    int n; 
    in >> n;
    
    set<pair<int,int>> DsCanh;

    for (int i=1;i<=n;i++){
        int a;
        in >> a;
        for (int j=1;j<=a;j++){
            int b; in >> b;
            if (DsCanh.find({i,b})==DsCanh.end() && DsCanh.find({b,i})==DsCanh.end())  DsCanh.insert({i,b});
        }
    }

    out << n << " " << DsCanh.size() << endl;
    for (auto it:DsCanh){
        out << it.first << " " << it.second << endl;
    }

    in.close();
    out.close();
}
int main() {
    MaTranKeSangDanhSachCanh("MaTranKe.txt","DsCanh.txt");
    //MaTranKeSangDanhSachKe("MaTranKe.txt","DsKe.txt");
    //DanhSachCanhSangMaTranKe("DsCanh.txt","MaTranKe.txt");
    //DanhSachCanhSangDanhSachKe("DsCanh.txt","DsKe.txt");
    //DanhSachKeSangMaTranKe("DsKe.txt","MaTranKe.txt");
    //DanhSachKeSangDanhSachCanh("DsKe.txt","DsCanh.txt");
    cout << "Thanh Cong" << endl;
    return 0;
}