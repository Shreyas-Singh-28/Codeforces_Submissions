#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    int a,b,x;
    cin>>a>>b>>x;
    int res=abs(a-b);
    int cnt=0;
    while(a!=b) {
        if(a==b) {
            break;
        }
        if(a<b) swap(a,b);
        cnt++;
        res=min(res,abs((a/x)-b)+cnt);
        a/=x;
    }
    cout<<res<<'
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