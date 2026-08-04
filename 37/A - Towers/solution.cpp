#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    int n;cin>>n;
    unordered_map<int,int> m;
    vector<int> a(n);
    for(auto &x:a) {
        cin>>x;
        m[x]++;
    }
    int s=0;
    int cnt=0;
    for(auto &[key,value]:m) {
        s=max(s,value);
        cnt++;
    }
    cout<<s<<" "<<cnt;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}