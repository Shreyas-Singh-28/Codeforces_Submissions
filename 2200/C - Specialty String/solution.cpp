#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
// 
 
void solve() {
    int n;cin>>n;
    string s;cin>>s;
    stack<char> st;
    for(int i=0;i<n;i++) {
        if(st.empty() || s[i]!=st.top()) {
            st.push(s[i]);
        }
        else st.pop();
    }
    cout<<(st.empty()?"YES
":"NO
");
    return;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
}