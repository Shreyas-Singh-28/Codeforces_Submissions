#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    int n;cin>>n;
    string s;cin>>s;
    int empty=0;
    int cons=0;
    int temp=0;
    for(int i=0;i<n;i++) {
        if(s[i]=='.') {
            empty++;
            temp++;
        }
        else{
            cons=max(temp,cons);
            temp=0;
        }
    }
    cons=max(temp,cons);
    if(cons>=3) {
        cout<<2<<'
';
        return;
    }
    cout<<empty<<'
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