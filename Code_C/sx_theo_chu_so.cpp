#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool CustomSort(string a,string b){
    return a+b > b+a;
}
void TestCase(){
    int n; cin >> n;
    vector <string> v;
    string x;
    while (n--){
        cin >> x;
        v.push_back(x);
    }
    sort (v.begin(),v.end(),CustomSort);
    for (auto x:v) cout << x;
    cout << endl;
 }
int main()
{
    int t; cin >> t;
    while (t--){
        TestCase();
    }
}