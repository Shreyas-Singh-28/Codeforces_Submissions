#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    string s;cin>>s;
    int n=s.length();
    int cnt=0;
    for(int i=0;i<n-1;i++) {
        if(s[i]==s[i+1]) cnt++;
    }
    if(cnt<=2) {
        cout<<"YES
";return;
    }
    cout<<"NO
";
    return;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
}