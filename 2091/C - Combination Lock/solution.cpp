#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
// 1 2 3 4 5
// 1 4 2 5 3
// 3 1 4 2 5
// 5 3 1 4 2
// 2 5 3 1 4
// 4 2 5 3 1
 
void solve() {
    int n;cin>>n;
    if(n%2==0) {
        cout<<-1<<'
';
    }
    else {
        vector<int> a(n);
        int cnt=1;
        for(int i=0;i<2*n;i+=2) {
            a[i%n]=cnt++;
        }
        for(int i=0;i<n;i++) {
            cout<<a[i]<<' ';
        }
        cout<<'
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