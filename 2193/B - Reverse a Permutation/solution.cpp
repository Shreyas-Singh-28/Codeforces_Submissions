#include <bits/stdc++.h>
 
using namespace std;
using vi = vector<int>;
 
void solve() {
    int n;
    cin >> n;
    vi p(n); for(auto &x:p) cin>>x;
    int l=0;
    for(;l<n;l++) {
        if(p[l]!=n-l) break;
    }
    int r=0;
    for(;r<n;r++) {
        if(p[r]==n-l) break;
    }
    reverse(p.begin()+l,p.begin()+r+1);
    for(auto &x:p) cout<<x<<" ";
    cout<<endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
}