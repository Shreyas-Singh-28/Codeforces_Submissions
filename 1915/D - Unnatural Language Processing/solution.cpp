#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    int n;cin>>n;
    string s;cin>>s;
    stack<string> st;
    int i=n-1;
    while(i>=0) {
        bool cv=0;
        if(s[i]=='a' || s[i]=='e') {
            cv=1;
        }
        string temp="";
        if(cv) {
            temp=s.substr(i-1,2);
            i-=2;
        }
        else{
            temp=s.substr(i-2,3);
            i-=3;
        }
        st.push(temp);
    }
    string ans="";
    while(!st.empty()) {
        string temp=st.top();
        ans+=temp;
        ans+=".";
        st.pop();
    }
    ans.pop_back();
    cout<<ans<<'
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