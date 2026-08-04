#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    int n,k;cin>>n>>k;
    string s;cin>>s;
    int temp=0,res=0;
    for(int i=0;i<n;i++) {
        if(i<k) {
            if(s[i]=='W') {
                res++;
            }
        }
        else{
            if(i==k) temp=res;
            if(s[i]=='W') {
                temp++;
            }
            if(s[i-k]=='W') {
                temp--;
            }
            res=min(temp,res);
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