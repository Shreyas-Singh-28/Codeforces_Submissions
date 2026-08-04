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
    int res=0;
    // 1 1 2 3 3 4 5 5 5 6 9
    // 1 2 3 4 5 6
    int l=0,r=n-1;
    sort(a.begin(),a.end());
    int mid=a[n/2];
    while(l<r) {
        if(a[l]!=mid || a[r]!=mid) res++;
        l++;
        r--;
    }
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