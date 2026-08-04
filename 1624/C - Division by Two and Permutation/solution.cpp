#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    int n;cin>>n;
    vector<int> a(n);
    for(auto &x:a)cin>>x;
    set<int> s;
    for(int i=0;i<n;i++) {
        if(a[i]<=n && !s.count(a[i])) {
            s.insert(a[i]);
        }
        else{
            while(a[i]>n || s.count(a[i])) {
                a[i]=a[i]/2;
            }
            if(a[i]>0) s.insert(a[i]);
        }
    }
    // for(auto &x:s) cout<<x<<" ";
    if(s.size()!=n) {
        cout<<"NO"<<'
';
    }
    else{
        cout<<"YES"<<'
';
    }
    return;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
}