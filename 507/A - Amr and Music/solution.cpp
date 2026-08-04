#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    int n,k;cin>>n>>k;
    vector<pair<int,int>> v;
    int ans=0;
    for(int i=0;i<n;i++) {
        int x;
        cin>>x;
        v.push_back({x,i+1});
    }
    sort(v.begin(),v.end());
    for(auto &[key,value]:v) {
        if(k>=key) {
            k-=key;
            ans++;
        }
        else{
            break;
        }
    }
    cout<<ans<<'
';
    for(int i=0;i<ans;i++) {
        cout<<v[i].second<<" ";
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}