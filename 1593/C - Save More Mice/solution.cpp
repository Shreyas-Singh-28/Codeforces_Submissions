#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    ll n,k;cin>>n>>k;
    vector<ll> a(k);
    for(int i=0;i<k;i++) {
        int x;
        cin>>x;
        a[i]=n-x;
    }
    sort(a.begin(),a.end());
    int res=0;
    ll cat=0;
    for(int i=0;i<k;i++) {
        cat+=a[i];
        if(cat<n) res++;
    }
    cout<<res<<'
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