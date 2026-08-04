// 1 2 3 4 5
// 2 3 5
 
/* 
     l=1, r=3
    l=2, r=2
    l=3, r=3
*/
 
/*
1 2 3 4
1 2 3 4
 
1 
2
3
4
int cnt=4
now check for end rank
*/
 
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    int n;cin>>n;
    int nn=n;
    vector<vector<int>> vec;
    while(nn--) {
        int l,r,u,v;
        cin>>l>>r>>u>>v;
        vec.push_back({l,r,u,v});
    }
    for(int i=0;i<n;i++) {
        int m=n-i;
        // bool ok=1;
        int k=1;
        int l=m;
        int cnt=0;
        int vio=0;
        for(int j=0;j<n;j++) {
            if((vec[j][0]<=k && vec[j][1]>=k) || (vec[j][2]<=l && vec[j][3]>=l)) {
                vio++;
            }
            else {
                k++;
                l--;
                cnt++;
            }
            if(vio>(n-m)) {
                break;
            }
            if(cnt==m) {
                cout<<m<<'
';
                return;
            }
        }
    }
    cout<<0<<'
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