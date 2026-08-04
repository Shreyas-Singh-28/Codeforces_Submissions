#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) {
        cin>>a[i];
        if(i>0) a[i]+=a[i-1];
    }
    int m;cin>>m;
    vector<int> good(m);
    for(auto &x:good) cin>>x;
    for(int i=0;i<m;i++) {
        int target=good[i];
        int l=0,r=n-1;
        int ans=-1;
        while(l<=r) {
            int mid=l+(r-l)/2;
            if(target<=a[mid]) {
                ans=mid;
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        cout<<ans+1<<'
';
    }
    return;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}