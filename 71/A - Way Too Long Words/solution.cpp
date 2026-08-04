#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
 
void solve() {
    string s;
    cin>>s;
    if(s.length()<11) cout<<s<<endl;
    else cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int tt;
    cin>>tt;
    while(tt--) {
        solve();
    }
    return 0;
}