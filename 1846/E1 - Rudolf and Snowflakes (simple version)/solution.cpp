#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
// 2 - 7, 15, 31, 63
// 2*(2+1)+1
// 3 - 13, 40, 121
// 3*(3+1)+1
// 4 - 21, 85, 341
// 
map<int,int> mp;
 
void pre() {
    for(int i=2;i<1000;i++) {
        int init=i*(i+1)+1;
        int leaf=i*i;
        mp[init]++;
        while(init<=1000000) {
            init+=(leaf*i);
            leaf*=i;
            mp[init]++;
        }
    }
}
 
void solve() {
    int n;cin>>n;
    if(mp.count(n)) cout<<"YES
";
    else cout<<"NO
";
    return;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    pre();
    while(t--) solve();
}