#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
// 
 
void solve() {
    int n,x;cin>>n>>x;
    vector<int> a(n);
    for(int &x:a) cin>>x;
    sort(a.begin(),a.end(),greater<>());
    int cnt=0;
    ll temp=0;
    for(int i=0;i<n;i++) {
        if(a[i]>=x) cnt++;
        else {
            temp++;
            ll minn=a[i];
            if(1LL*temp*minn>=x) {
                cnt++;
                temp=0;
            }
        }
    }
    cout<<cnt<<'
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