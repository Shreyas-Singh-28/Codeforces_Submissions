#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &x:a) cin>>x;
    int largest=*max_element(a.begin(),a.end());
    int smallest=*min_element(a.begin(),a.end());
    cout<<largest+1-smallest<<'
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