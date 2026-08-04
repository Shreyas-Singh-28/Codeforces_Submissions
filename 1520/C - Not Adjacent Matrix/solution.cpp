#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    int n;cin>>n;
    if(n==2) {
        cout<<-1<<'
';
        return;
    }
    int c=0;
    for(int i=1;i<=n*n;i+=2) {
        if(c%n==0 && c>0) {
            cout<<'
';
        }
        cout<<i<<" ";
        c++;
    }
    for(int i=2;i<=n*n;i+=2) {
        if(c%n==0 && c>0) {
            cout<<'
';
        }
        cout<<i<<" ";
        c++;
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