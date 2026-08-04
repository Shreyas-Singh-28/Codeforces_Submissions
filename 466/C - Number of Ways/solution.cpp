#include <bits/stdc++.h>
 
using namespace std;
using vi = vector<int>;
using ll=long long;
 
void solve() {
    ll n; cin>>n;
    vector<ll> a(n);
    for(auto &x:a) cin>>x;
    for(int i=1;i<n;i++) a[i]+=a[i-1];
    ll total = a[n-1];
    if((total%3)!=0) {
        cout<<0;
        return;
    }
    ll res{0};
    ll count{0};
    ll s=total/3;
    for(int i=1;i<n-1;i++) {
        if(a[i-1]==s) count++;
        if(a[i]==s*2) res+=count;
    }
    cout<<res;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}