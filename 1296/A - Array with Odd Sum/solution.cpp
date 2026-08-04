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
    int s=accumulate(a.begin(),a.end(),0);
    if(s%2==1) {
        cout<<"YES
";return;
    }
    int even=0,odd=0;
    for(auto &x:a) {
        if(x%2==0) even=1;
        else odd=1;
    }
    if(odd==1 && even==1) {
        cout<<"YES
";return;
    }
    cout<<"NO
";
    return;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
}