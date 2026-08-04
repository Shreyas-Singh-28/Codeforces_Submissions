#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    int n;cin>>n;
    if(n%4!=0) {
        cout<<"NO
";return;
    }
    cout<<"YES
";
    for(int i=2;i<=n;i+=2) {
        cout<<i<<" ";
    }
    for(int i=1;i<n;i+=2) {
        if(i!=(n-1)) cout<<i<<" ";
        else cout<<i+(n/2)<<'
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