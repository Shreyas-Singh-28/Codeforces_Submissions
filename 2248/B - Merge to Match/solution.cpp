#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
/*
    10 1 100 6 4
    90 5
 
    1 4 6 10 100
    5 90
    */
 
void solve() {
    int n,m;cin>>n>>m;
    vector<int> c;
    vector<int> a(n);
    for(int &x:a) {
        cin>>x;
        c.push_back(x);
    }
    vector<int> b(m);
    unordered_set<int> s;
    for(int &x:b) {
        cin>>x;
        s.insert(x);
        c.push_back(x);
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    if(n<(2*m)) {
        cout<<"NO
";
        return;
    }
    sort(c.begin(),c.end());
    if(s.count(c[0]) || s.count(c[n+m-1])) {
        cout<<"NO
";
        return;
    }
    unordered_set<int> can;
    int j=0;
    for(int i=0;i<n;i++) {
        if(a[i]<b[j]) {
            can.insert(a[i]);
            j++;
        }
        if(j==m) break;
    }
    if(j<m) {
        cout<<"NO
";
        return;
    }
    j=0;
    for(int i=0;i<n;i++) {
        if(can.count(a[i])) continue;
        else{
            if(a[i]>b[j]) {
                j++;
            }
            if(j==m) break;
        }
    }
    if(j!=m) {
        cout<<"NO
";
        return;
    }
    cout<<"YES
";
    return;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
}