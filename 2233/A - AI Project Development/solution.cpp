#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    int n,x,y,z;
    cin>>n>>x>>y>>z;
    int without_ai=(n+x+y-1)/(x+y);
    int with_ai=0;
    int work=0;
    while(work<n) {
        if(z>0) {
            work+=x;
            z--;
        }
        else{
            work+=(x+10*y);
        }
        with_ai++;
    }
    cout<<min(without_ai,with_ai)<<'
';
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
}