#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    int n,k;cin>>n>>k;
    string s;cin>>s;
    for(int i=0;i<k;i++) {
        int one=0;
        int j=i;
        while(j<n) {
            if(s[j]=='1') one++;
            j+=k;
        }
        if(one%2==1) {
            cout<<"NO"<<'
';
            return;
        }
    }
    cout<<"YES"<<'
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