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
    for(auto &x:a) cin>>x;
    ll res=0;
    for(int i=0;i<n;i++) {
        a[i]-=i;
    }
    sort(a.begin(),a.end());
    ll c=1;
    for(int i=0;i<n-1;i++) {
        if(a[i]==a[i+1]) {
            c++;
        }
        else{
            res=res+(c*(c-1))/2;
            c=1;
        }
    }
    res=res+(c*(c-1))/2;
    cout<<res<<'
';
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
}