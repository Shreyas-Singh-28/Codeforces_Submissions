#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    ll n;cin>>n;
    vector<ll> a(n);
    vector<ll> b(n);
    for(auto &x:a) cin>>x;
    for(auto &x:b) cin>>x;
    auto ind1=min_element(a.begin(),a.end())-a.begin();
    auto ind2=min_element(b.begin(),b.end())-b.begin();
    ll c=0;
    for(ll i=0;i<n;i++) {
        // if(i==ind1) {
        //     c=c+b[i]-b[ind2];
        // }
        // else if(i==ind2) {
        //     c=c+a[i]-a[ind1];
        // }
        // else{
        c=c+max(a[i]-a[ind1],b[i]-b[ind2]);
    }
    cout<<c<<'
';
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
}