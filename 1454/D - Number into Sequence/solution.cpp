#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    ll n;cin>>n;
    map<ll,ll> freq;
    ll copy=n;
    int i=2;
 
    for(ll i=2;i*i<=copy;i++){
        while(copy%i==0){
            freq[i]++;
            copy/=i;
        }
    }
    if(copy>1) freq[copy]++;
    // while(copy!=1) {
    //     if(copy%i==0) {
    //         freq[i]++;
    //         copy/=i;
    //     }
    //     else{
    //         i++;
    //     }
    // }
    vector<ll> res;
    copy=n;
    int k=0;
    while(copy!=1) {
        ll a=1;
        for(auto &x:freq) {
            if(x.second>0) {
                a*=x.first;
                x.second--;
                copy/=x.first;
            }
        }
        res.push_back(a);
        k++;
    }
    reverse(res.begin(),res.end());
    cout<<k<<'
';
    for(int i=0;i<k;i++) {
        cout<<res[i]<<" ";
    }
    cout<<'
';
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
}