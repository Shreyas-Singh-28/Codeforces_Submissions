#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    int n;cin>>n;
    vector<int> a(n);
    for(int &x:a) cin>>x;
    int maxx=*max_element(a.begin(),a.end());
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++) {
        mp[a[i]]++;
    }
    cout<<mp[maxx]<<'
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