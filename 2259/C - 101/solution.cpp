#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    int n;cin>>n;
    vector<int> a(n);
    for(int &x:a) cin>>x;
    int ind1=-1;
    int ind2=-1;
    for(int i=0;i<n;i++) {
        if(a[i]==1 || a[i]==-1) {
            a[i]=1;
            break;
        }
    }
    for(int i=n-1;i>=0;i--) {
        if(a[i]==1 || a[i]==-1) {
            a[i]=1;
            break;
        }
    }
    for(int i=0;i<n;i++) {
        if(a[i]==-1) a[i]=0;
        cout<<a[i]<<' ';
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