#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    int n;cin>>n;
    string s;cin>>s;
    int res=1;
    bool red2=0;
    bool red1=0;
    for(int i=1;i<n-1;i++) {
        if(s[i-1]!=s[i]) res++;
        if(s[i-1]==s[i+1] && s[i]!=s[i-1]) red2=1;
        if(s[i]!=s[i-1] && s[i]!=s[i+1]) red1=1;
    }
    if(s[n-1]!=s[n-2]) res++;
    if(red2) res-=2;
    else if(red1) res-=1;
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