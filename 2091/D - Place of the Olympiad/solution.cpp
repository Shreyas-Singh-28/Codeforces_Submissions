#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
//  . . . . . . . .
 
// m/i -> i-1 longest bench ke liye ek 
// row mein kitni chootengi
// ek row mein = m-(m/i), then answer is i-1
// saare row mein = n*(m-(m/i)) >= k
// 3*(4-4/i)>=7
 
void solve() {
    ll n,m,k;
    cin>>n>>m>>k;
    ll ans=m/((m-(k+n-1)/n)+1);
    cout<<ans<<'
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