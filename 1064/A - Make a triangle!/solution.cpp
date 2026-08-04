#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    int a,b,c;cin>>a>>b>>c;
    int res=min(a+b-c,a+c-b);
    res=min(res,b+c-a);
    if(res>0) {
        cout<<0;return;
    }
    cout<<abs(res)+1;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}