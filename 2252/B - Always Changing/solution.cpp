#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
//100111
// max(1_vio,1,vio)+max(other_vio,other_cnt)
 
void solve() {
    int n;cin>>n;
    string s;cin>>s;
    int one=0,zero=0;
    for(char &ch:s) {
        if(ch=='0') zero++;
        else one++;
    }
    if(abs(one-zero)>2) {
        cout<<-1<<'
';
        return;
    }
    int one_vio=0,zero_vio=0;
    for(int i=1;i<n;i++) {
        if(s[i]==s[i-1]) {
            if(s[i]=='1') one_vio++;
            else zero_vio++;
        } 
    }
    // cout<<zero<<' '<<one<<' '<<zero_vio<<' '<<one_vio<<'
';
    if(one_vio>zero_vio) {
        cout<<one_vio+one_vio-1<<'
';
    }
    else if(zero_vio>one_vio) cout<<zero_vio+zero_vio-1<<'
';
    else cout<<zero_vio+one_vio<<'
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