#include <bits/stdc++.h>
#define pb push_back
#define sz size()
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n, m;
    cin >> n >> m;
    int a[m], b[m];
    for (int i = 0; i < m; i++) cin >> a[i];
    for (int i = 0; i < m; ++i)
        b[i] = n - a[i];
    int l[m], r[m];
    stack<int> s1, s2, s3, s4;
    s1.push(m - 1);
    for (int i = m - 1; ~i; --i){
        while (s1.sz and a[i] <= a[s1.top()])
            s1.pop();
        if (s1.sz)
            r[i] = s1.top() - 1;
        else
            r[i] = m - 1;
        s1.push(i);
    }
    for (int i = 0; i < m; ++i){
        while (s2.sz and a[i] <= a[s2.top()])
            s2.pop();
        if (s2.sz)
            l[i] = s2.top() + 1;
        else
            l[i] = 0;
        s2.push(i);
    }
    ll res1 = 0, res2 = 0;
    for (int i = 0; i < m; ++i)
        res1 = max(res1, 1LL * a[i] * (r[i] - l[i] + 1));
    s3.push(m - 1);
    for (int i = m - 1; ~i; --i){
        while (s3.sz and b[i] <= b[s3.top()])
            s3.pop();
        if (s3.sz)
            r[i] = s3.top() - 1;
        else
            r[i] = m - 1;
        s3.push(i);
    }
    for (int i = 0; i < m; ++i){
        while (s4.sz and b[i] <= b[s4.top()])
            s4.pop();
        if (s4.sz)
            l[i] = s4.top() + 1;
        else
            l[i] = 0;
        s4.push(i);
    }
    for (int i = 0; i < m; ++i)
        res2 = max(res2, 1LL * b[i] * (r[i] - l[i] + 1));
    cout << max(res1, res2) << endl;
}