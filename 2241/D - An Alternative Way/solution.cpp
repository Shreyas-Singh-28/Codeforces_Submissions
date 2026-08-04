#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    int n;cin>>n;
    vector<ll> a(n);
    vector<ll> b(n);
    for(ll &x:a) cin>>x;
    for(ll &x:b) cin>>x;
    for(int i=n-1;i>0;i--) {
        if(a[i]==b[i] || a[i]<b[i]) continue;
        else{
            a[i-1]+=(a[i]-b[i]);
        }
    }
    if(a[0]<=b[0]) {
        cout<<"YES"<<'
';
    }
    else{
        cout<<"NO"<<'
';
    }
    return;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
}