#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    ll n,m;cin>>n>>m;
    vector<int> a(m);
    for(auto &x: a)cin>>x;
    ll l=0;
    ll res=0;
    for(ll i=0;i<m-1;i++) {
        if(a[i]>a[i+1]) {
            l++;
        }
    }
    // cout<<l;
    res=res+(a[m-1]-1)+(n*l);
    cout<<res;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}