#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    string s;cin>>s;
    bool ok1=0,ok2=0;
    string ans="";
    for(char &ch:s) {
        if(ch=='0' && ok1==0) {
            ok1=1;
        }
        else if(ch=='1' && ok2==0) {
            ok2=1;
        }
        else{
            ans+=ch;
        }
    }
    cout<<ans<<'
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