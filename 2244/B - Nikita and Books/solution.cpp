#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    int n;cin>>n;
    vector<ll> a(n);
    for(ll &x:a) cin>>x;
    ll req_sum=0;
    ll cur_sum=0;
    for(int i=0;i<n;i++) {
        cur_sum+=a[i];
        req_sum+=(i+1);
        if(cur_sum>=req_sum) {
            continue;
        }
        else{
            cout<<"NO
";
            return;
        }
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