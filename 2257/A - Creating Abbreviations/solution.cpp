#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    int n,m;cin>>n>>m;
    vector<string> a(n);
    unordered_set<char> s;
    for(string &x:a) {
        cin>>x;
        s.insert(toupper(x[0]));
    }
    vector<string> b(m);
    for(string &x:b) cin>>x;
    for(string &x:b) {
        int len=x.length();
        for(int i=0;i<len;i++) {
            if(!s.count(x[i])) {
                cout<<"NO
";
                return;
            }
        }
    }
    cout<<"YES
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