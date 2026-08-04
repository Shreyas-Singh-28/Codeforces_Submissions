#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    int n;cin>>n;
    vector<int> a(n);
    for(auto &x:a)cin>>x;
    sort(a.begin(),a.end(),greater<>());
    for(int i=0;i<n-2;i++) {
        if(a[i+2]!=(a[i]%a[i+1])) {
            cout<<-1<<'
';
            return;
        }
    }
    cout<<a[0]<<" "<<a[1]<<'
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