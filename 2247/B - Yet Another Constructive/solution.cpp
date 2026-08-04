#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    int n,k,m;
    cin>>n>>k>>m;
    if(k>m) {
        cout<<"NO
";
    }
    else {
        cout<<"YES
";
        
        for(int i=1;i<n;i++) {
            cout<<m+1<<' ';
        }
        cout<<m-k+1<<'
';
    }
    return;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
}