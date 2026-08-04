#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    int n;cin>>n;
    vector<int> a(n);
    for(auto &x:a)cin>>x;
    vector<long long> ans(n);
    long long pre=0;
    long long rex=LLONG_MAX;
    ans[0]=a[0];
    for(int i=0;i<n;i++) {
        pre+=a[i];
        rex=min(rex,pre/(i+1));
        cout<<rex<<" ";
    }
    cout<<'
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