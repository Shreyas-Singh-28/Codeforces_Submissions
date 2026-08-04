#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    // int n;cin>>n;
    string s;cin>>s;
    int n=s.length();
    int cap=1;
    for(int i=1;i<n;i++) {
        if(islower(s[i])) {
            cap=0;
            break;
        }
    }
    // cout<<cap;
    if(!cap) {
        cout<<s;return;
    }
    for(int i=0;i<n;i++) {
        cout<<((islower(s[i]))?(char)toupper(s[i]):(char)tolower(s[i]));
        // if(islower(s[i])) {
        //     cout<<(char)toupper(s[i]);
        // }
        // else{
        //     cout<<(char)tolower(s[i]);
        // }
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}