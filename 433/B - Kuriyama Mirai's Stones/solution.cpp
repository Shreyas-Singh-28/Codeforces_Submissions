#include <bits/stdc++.h>
 
using namespace std;
using vi = vector<int>;
 
void solve() {
    int n; cin>>n;
    vector<long long> v(n);
    for(auto &x:v) cin>>x;
    int m;cin>>m;
    vector<long long> sorted=v;
    for(int i=1;i<n;i++) v[i]+=v[i-1];
    sort(sorted.begin(),sorted.end());
    for(int i=1;i<n;i++) sorted[i]+=sorted[i-1];
    while(m--) {
        int type,l,r;cin>>type>>l>>r;
        l-=1,r-=1;
        if(type==2) {
            if(l==0) cout<<sorted[r]<<"
";
            else cout<<sorted[r]-sorted[l-1]<<"
";
        }
        else {
            if(l==0) cout<<v[r]<<'
';
            else cout<<v[r]-v[l-1]<<"
";
        }
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}