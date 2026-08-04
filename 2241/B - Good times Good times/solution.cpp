#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
int digits(int x) {
    int cnt=0;
    while(x) {
        cnt++;
        x/=10;
    }
    return cnt;
}
 
void solve() {
    ll x;cin>>x;
    int len=digits(x);
    long long y=pow(10,len)+1;
    cout<<y<<'
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