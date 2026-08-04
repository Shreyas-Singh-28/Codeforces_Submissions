#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    vector<int> a(3);
    for(int &x:a) cin>>x;
    sort(a.begin(),a.end());
    cout<<min(a[1]-a[0],a[2]-a[1])<<'
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