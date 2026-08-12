// -1 -1  0  0  1    -1  1    1
// 90 91 92 93 94 95 96 97 98 99 
//  0  1  2  2  2  1  1  2  1  1
 
//  0  0  1  2  3  3  3  4  4  4
 
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    int n,k,q;
    cin>>n>>k>>q;
    vector<int> a(200001,0);
    int minn=200001;
    int maxx=0;
    while(n--) {
        int l,r;
        cin>>l>>r;
        a[l-1]=a[l-1]-1;
        a[r]=a[r]+1;
        minn=min(minn,l-1);
        maxx=max(maxx,r);
    }
    int pref=0;
    for(int i=maxx;i>=minn;i--) {
        pref+=a[i];
        a[i]=pref;
        // cout<<pref<<'
';
    }
    pref=0;
    for(int i=minn;i<=maxx;i++) {
        if(a[i]>=k) pref++;
        a[i]=pref;
    }
    for(int i=maxx+1;i<=200000;i++) {
        a[i]=pref;
    }
    while(q--) {
        int l,r;
        cin>>l>>r;
        cout<<a[r]-a[l-1]<<'
';
    }
    return;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}