#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
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
    if(zero_vio==one_vio) {
        cout<<zero_vio+one_vio<<'
';
    }
    else cout<<max(zero_vio,one_vio)+max(zero_vio,one_vio)-1<<'
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