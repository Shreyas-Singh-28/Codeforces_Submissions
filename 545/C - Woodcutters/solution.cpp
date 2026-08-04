#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    int n;cin>>n;
    int ans=2;
    if(n==1) {
        cout<<1;
        return;
    }
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++) {
        int x,h;cin>>x>>h;
        v.push_back({x,h});
    }
    // auto i=v.front();
    for(auto it=v.begin()+1;it<v.end()-1;it++) {
        if((*it).first-(*it).second>(*(it-1)).first) {
            ans++;
        }
        else if((*it).first+(*it).second<(*(it+1)).first) {
            ans++;
            (*it).first=(*it).first+(*it).second;
        }
    }
    cout<<ans;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}