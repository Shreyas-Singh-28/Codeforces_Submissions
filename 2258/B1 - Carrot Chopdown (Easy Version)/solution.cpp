#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
// 1 1 3 5 5 7 7
 
void solve() {
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    unordered_map<int,int> mp;
    for(int &x:a) {
        cin>>x;
        mp[x]++;
    }
    int res=0;
    for(int i=1;i<=m;i++) {
        res=max(res,mp[i]+2*mp[2*i]+(n-mp[i]-mp[2*i]));
        n-=mp[i];
    }
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