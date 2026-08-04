#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    int n,x;cin>>n>>x;
    vector<int> a(n);
    for(auto &x:a)cin>>x;
    int curr=0;
    int res=a[0]-0;
    for(int i=0;i<n-1;i++) {
        res=max(res,a[i+1]-a[i]);
    }
    res=max(2*(x-a[n-1]),res);
    cout<<res<<'
';
    return;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
}