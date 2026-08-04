#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    int n;
    cin>>n;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++) {
        int a,b;cin>>a>>b;
        v.push_back({a,b});
    }
    sort(v.begin(),v.end());
    // int n=v.size();
    for(int i=0;i<n-1;i++) {
        if(v[i].first<v[i+1].first && v[i].second>v[i+1].second){
            cout<<"Happy Alex
";
            return;
        }
    }
    cout<<"Poor Alex
";
    return;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}