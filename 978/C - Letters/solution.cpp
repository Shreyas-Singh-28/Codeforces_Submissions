#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    int n,m;cin>>n>>m;
    vector<ll> a(n);
    for(int i=0;i<n;i++) {
        cin>>a[i];
        if(i>0) a[i]+=a[i-1];
    }
    //10 25 37
    vector<ll> b(m);
    for(auto &x:b)cin>>x;
    for(int i=0;i<m;i++) {
        ll target=b[i];
        int l=0,r=n-1;
        int ans=-1;
        while(l<=r) {
            int mid=l+(r-l)/2;
            if(target<=a[mid]) {
                ans=mid;
                r=mid-1;
            }
            else{
                // ans=mid+1;
                l=mid+1;
            }
        }
        if(ans==0) cout<<1<<" "<<b[i]<<'
';
        else cout<<ans+1<<" "<<b[i]-a[ans-1]<<'
';
    }
    return;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}