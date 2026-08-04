#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    int n;cin>>n;
    vector<ll> a(n);
    for(auto &x:a) cin>>x;
    for(int i=0;i<n;i++) {
        // cout<<i<<"th Iteration: "<<a[i]<<" ";
        if(a[i]<=3) {
            cout<<"NO
";
            continue;
        }
        ll b=round(sqrt(a[i]));
        // cout<<b;
        if(b*b==a[i]) {
            // cout<<"Entered...
";
            int c=1;
            for(int j=2;j*j<=b;j++) {
                if(b%j==0) c=0;
            }
            if(c==1) cout<<"YES
";
            else cout<<"NO
";
        }
        else{
            cout<<"NO
";
        }
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}