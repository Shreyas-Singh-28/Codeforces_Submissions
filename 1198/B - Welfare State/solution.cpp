// 1 2 3 4
// 3 2 3 3
 
// 1 2 3 4 
//   2
// ele = 
 
// 3 50 2 1 10
//   0
// 8 8  8 8 8
//     20
 
// lar=8
// 3  50  2  1 10
// -1 -1  1 -1 -1
//        20
 
// ele=8
//   8 20
 
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
    vector<bool> upd(n,0);
    int lar=-1;
    int q;cin>>q;
    vector<vector<ll>> v;
    for(int i=0;i<q;i++) {
        int dec;cin>>dec;
        if(dec==1) {
            int ind,val;
            cin>>ind>>val;
            v.push_back({dec,ind,val});
        }
        else{
            int val;
            cin>>val;
            v.push_back({dec,val});
        }
    }
    for(int i=q-1;i>=0;i--) {
        int dec=v[i][0];
        if(dec==1) {
            int ind=v[i][1],val=v[i][2];
            ind-=1;
            if(!upd[ind]) {
                a[ind]=max(val,lar);
                upd[ind]=1;
            }
        }
        else{
            int val=v[i][1];
            lar=max(val,lar);
        }
    }
    for(int i=0;i<n;i++) {
        if(!upd[i]) {
            a[i]=max(a[i],lar);
        }
        cout<<a[i]<<' ';
    }
    return;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}