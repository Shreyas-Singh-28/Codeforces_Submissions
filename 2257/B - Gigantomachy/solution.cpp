#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    int n,m;cin>>n>>m;
    vector<int> a(n);
    vector<int> b(m);
    for(int &x:a) cin>>x;
    for(int &x:b) cin>>x;
    // 4 3 2 1
    // 6 5
    // 4
    ll l1=0;
    ll l2=0;
    for(int i=0;i<n-1;i++) {
        l1+=(a[i]-a[i+1]+1);
    }
    l1+=a.back();
    for(int i=0;i<m-1;i++) {
        l2+=(b[i]-b[i+1]+1);
    }
    l2+=b.back();
    cout<<(l1>=l2?"1
":"2
");
    return;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
}