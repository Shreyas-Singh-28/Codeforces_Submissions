#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    int n,m;cin>>n>>m;
    vector<int> a(n);
    vector<int> b(m);
    for(auto &x:a)cin>>x;
    for(auto &x:b)cin>>x;
    sort(a.begin(),a.end());
    for(int i=0;i<m;i++) {
        int target=b[i];
        int l=0,r=n-1;
        int ans=-1;
        while(l<=r) {
            int mid=l+(r-l)/2;
            if(target<a[mid]) {
                ans=mid;
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        cout<<(ans==-1?n:ans)<<" ";
    }
    cout<<'
';
    return;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}