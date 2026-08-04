#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
 
void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ones{},c{};
    for(int i=0;i<s.length();i++) {
        if(s[i]=='1')
            ones++;
    }
    for(int i=0;i<s.length();i++) {
        if(s[i]=='1')
            c+=ones-1;
        else
            c+=ones+1;
    }
    cout<<c<<endl;
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