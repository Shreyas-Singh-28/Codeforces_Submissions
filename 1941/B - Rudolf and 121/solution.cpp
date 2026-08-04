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
    for(auto &x:a)cin>>x;
    for(int i=1;i<n-1;i++) {
        if(a[i-1]==0) continue;
        a[i]-=(2*a[i-1]);
        a[i+1]-=a[i-1];
        a[i-1]=0;
        if(a[i-1]<0 || a[i]<0 || a[i+1]<0) {
            cout<<"NO
";
            return;
        }
    }
    for(int i=n-2;i<n;i++) {
        if(a[i]!=0) {
            cout<<"NO
";
            return;
        }
    }
    cout<<"YES
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