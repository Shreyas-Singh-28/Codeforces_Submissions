#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    int n;cin>>n;
    vector<int> a(4*n,-1);
    int ele=1;
    for(int i=0;i<n;i++) {
        a[i]=ele;
        a[i+2*n]=ele;
        a[i+3*n]=ele;
        ele++;
    }
    ele=2;
    int done=0;
    for(int i=0;i<4*n;i++) {
        if(a[i]==-1) {
            if(done==n-1) {
                a[i]=1;
            }
            else{
                a[i]=ele;
                done++;
                ele++;
            }
        }
    }
    for(auto &x:a) cout<<x<<" ";
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