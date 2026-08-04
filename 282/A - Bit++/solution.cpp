#include <bits/stdc++.h>
 
using namespace std;
using vi = vector<int>;
 
void solve() {
    int n; cin>>n;
    int res=0;
    while(n--) {
        string s;cin>>s;
        if(s[1]=='+') res+=1;
        else res-=1;
    }
    cout<<res;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}