#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    double n,m,a;cin>>n>>m>>a;
    cout<<1LL*int(ceil(m/a))*int(ceil(n/a));
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}