// 1 2, 1 3, 1 5, 1 7, 2 4, 2 6, 2 10, 3 6, 3 9, 4 8, 5 10
 
// 1 2, 2 4, 3 6, 4 8, 5 10
// 1 3, 2,6, 3 9
// 1 5, 2 10
// 1 7
 
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    int n;cin>>n;
    vector<bool> is_prime(n+1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= n; i++) {
        if (is_prime[i] && (long long)i * i <= n) {
            for (int j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }
    ll cnt=0;
    for(ll i=2;i<=n;i++) {
        if(is_prime[i]) {
            cnt+=(n/i);
        }
    }
    cout<<cnt<<'
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