#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    int n;cin>>n;
    if(n==1) {
        cout<<1<<'
';
    }
    else if(n==2) {
        cout<<-1<<'
';
    }
    else{
        cout<<2<<' '<<4<<' ';
        n-=2;
        for(long long i=6;n>0;i*=2) {
            cout<<i<<' ';
            n--;
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