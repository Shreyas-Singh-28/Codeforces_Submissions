#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    int n;cin>>n;
    string s;cin>>s;
    // cout<<"solve"<<'
';
    while(s.length()>2) {
        string temp="";
        bool ok=0;
        int i=0;
        for(;i<s.length()-1;i++) {
            temp+=s[i];
            if(s[i]==s[i+1]) {
                i++;
                ok=1;
            }
        }
        for(;temp!="" && i<s.length();i++) {
            temp+=s[i];
        }
        s=temp;
        // cout<<s<<'
';
        if(!ok) break;
    }
    // cout<<s<<'
';
    if(s=="01"||s=="10") cout<<2<<'
';
    else cout<<1<<'
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