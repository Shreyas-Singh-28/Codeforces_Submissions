#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    int s,n;cin>>s>>n;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++) {
        int a,b;
        cin>>a>>b;
        v.push_back({a,b});
    }
    // int res=1;
    sort(v.begin(),v.end());
    for(auto &x:v) {
        if(s>x.first) {
            s+=x.second;
        }
        else{
            cout<<"NO";
            return;
        }
    }
    cout<<"YES";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}