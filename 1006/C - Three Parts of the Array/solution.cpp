#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    int n;cin>>n;
    vector<int> a(n);
    for(int &x:a) cin>>x;
    if(n==1) {
        cout<<0<<'
';
        return;
    }
    ll ans=0;
    ll l_sum=0;
    ll r_sum=0;
    int l=0,r=n-1;
    while(l<=r) {
        if(l_sum<=r_sum) {
            l_sum+=a[l++];
        }
        else {
            r_sum+=a[r--];
        }
        if(l_sum==r_sum) {
            ans=l_sum;
        }
    }
    if(l_sum==r_sum) ans=l_sum;
    cout<<ans<<'
';
    return;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}