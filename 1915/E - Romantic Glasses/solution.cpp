#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
// 1 12 13 14
// 2 6 11 13
 
// 2 12 16 22 30
// 5 9 18 25
 
// 0 2 -3 7 3 7 -2 4 -3 5
// 0 1 0 1 0 1 0
 
void solve() {
    int n;cin>>n;
    vector<ll> a(n);
    bool ok=0;
    for(int i=0;i<n;i++) {
        int x;
        cin>>x;
        if(i%2==0) a[i]=x;
        else a[i]=0-x;
    }
    ll pref=0;
    set<ll> sums;
    sums.insert(0);
    for(int i=0;i<n;i++) {
        pref+=a[i];
        if(sums.count(pref)) {
            ok=1;
            break;
        }
        sums.insert(pref);
    }
    cout<<(ok?"YES
":"NO
");
    return;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
}