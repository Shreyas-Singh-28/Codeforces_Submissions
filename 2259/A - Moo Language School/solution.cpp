#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    int n,k;cin>>n>>k;
    string s;cin>>s;
    int res=0;
    for(int i=0;i<n/k;i++) {
        bool found_0=0;
        for(int j=0;j<k;j++) {
            if(s[i*k+j]=='0') {
                found_0=1;
                break;
            }
        }
        if(!found_0) res++;
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