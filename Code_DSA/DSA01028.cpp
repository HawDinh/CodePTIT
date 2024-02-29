#include <bits/stdc++.h>
using namespace std;
vector <int> a,b;
int n,k;

void in(vector <int> a){
    for (int i=1;i<=k;i++) cout << a[b[i]] << " ";
    cout << endl;
}

int sinh(){
    int i=k;
    while (i>0 && b[i]==n-k+i) --i;
    
    if (i==0) return 0;
    else {
        ++b[i];
        for (int j=i+1;j<=k;j++) b[j]=b[j-1]+1;
    }
    return 1;
}

void Try(int i){
    for (int j=b[i-1]+1;j<=n-k+i;j++){
        b[i]=j;
        if (i==k) in(a);
        else Try(i+1);
    }
}

void TestCase(){
    cin >> n >> k;
    
    set <int> st;
    while (n--){
        int x; cin >> x;
        st.insert(x);
    }

    a.push_back(-1);

    for (int x:st) a.push_back(x);
    n=st.size();

    for (int i=0;i<=n;i++) b.push_back(i);

    //in(a);
    // while (sinh()) in(a);
    Try(1);
}

int main() {
    int t=1;
    while (t--){
        TestCase();
    }
    return 0;
}