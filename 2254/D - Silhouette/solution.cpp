#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
// 0 0 4 4 14
// 2 2 5 5 6
 
// 0 0 0
// 1 1 1
 
//(next-prev)/terms
 
void solve() {
    int n;cin>>n;
    vector<ll> a(n);
    for(ll &x:a) cin>>x;
    vector<ll> b=a;
    sort(b.begin(),b.end());
    if(b[0]!=0) {
        cout<<-1<<'
';
        return;
    }
    unordered_map<ll,ll> mp;
    ll last=0;
    for(int i=0;i<n;i++) {
        int terms=1;
        // bool found=0;
        while(i+1<n && b[i]==b[i+1]) {
            terms++;
            i++;
        }
        if(i+1<n) {
            if((b[i+1]-b[i])%terms!=0) {
                cout<<-1<<'
';
                return;
            }
            ll num=(b[i+1]-b[i])/terms;
            if(num<=last) {
                cout<<-1<<'
';
                return;
            }
            mp[b[i]]=num;
            last=num;
        }
        else {
            mp[b[i]]=last+1;
        }
    }
    vector<ll> ans(n);
    for(int i=0;i<n;i++) {
        ans[i]=mp[a[i]];
    }
    for(ll &x:ans) cout<<x<<' ';
    cout<<'
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