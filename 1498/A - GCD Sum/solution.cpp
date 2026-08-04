#include <bits/stdc++.h>
 
using namespace std;
using vi=vector<int>;
using ll=long long;
 
ll gcd(ll a, ll b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}
 
ll sum(ll x) {
    ll sum=0;
    while(x>0) {
        sum=sum+x%10;
        x/=10;
    }
    return sum;
}
 
void solve() {
    ll n;cin>>n;
    for(ll i=n;;i++) {
        if(__gcd(i,sum(i))>1) {
            cout<<i<<'
';
            return;
        }
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
}