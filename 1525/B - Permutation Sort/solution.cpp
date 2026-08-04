#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    int n;cin>>n;
    vector<int> a(n);
    for(auto &x:a) cin>>x;
    int sorted=1;
    for(int i=0;i<n;i++) {
        if(a[i]!=i+1) {
            sorted=0;
            break;
        }
    }
    if(sorted) {
        cout<<0<<'
';
    }
    else if(a[0]==1 || a[n-1]==n) {
        cout<<1<<'
';
    }
    else if(a[0]==n && a[n-1]==1) {
        cout<<3<<'
';
    }
    else {
        cout<<2<<'
';
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
}