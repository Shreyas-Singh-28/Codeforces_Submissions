#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    int n;cin>>n;
    string s;cin>>s;
    int res=0;
    int b=0;
    for(int i=0;i<n;i++) {
        if(s[i]=='(') b++;
        else {
            if(b==0) res++;
            else b--;
        }
    }
    cout<<res<<'
';
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
}