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
    stack<char> st;
    // int c=0;
    // int one=0;
    int l=0,r=0;
    for(int i=0;i<n;i++) {
        // st.push()
        if(s[i]=='(') l++;
        else r++;
        // if(c<0) {
        //     one++;
        //     if(one>=2) {
        //         cout<<"NO
";
        //         return;
        //     }
        //     while(s[++i]==')') {
 
        //     }
        //     i--;
        //     c=0;
        // }
    }
    if(l!=r) {
        cout<<"NO
";
        return;
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