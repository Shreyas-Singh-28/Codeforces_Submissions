#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    int x,k;cin>>x>>k;
    if(k>=2 && x>=2) {
        cout<<"NO"<<'
';
        return;
    }
    bool prime=1;
    for(int i=2;i*i<=x;i++) {
        if(x%i==0) {
            prime=0;
            break;
        }
    }
    if(x==1) prime=0;
    if(k==1) cout<< (prime?"YES":"NO")<<'
';
    else cout<<(k==2?"YES":"NO")<<'
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