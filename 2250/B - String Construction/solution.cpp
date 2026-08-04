#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    int n,k;cin>>n>>k;
    if(n==k+1) {
        cout<<-1<<'
';
        return;
    }
    // string ans="01";
    int zero=1;
    int one=1;
    // cout<<"solving
";
    while(k--) {
        if(zero==one) zero++;
        else one++;
    }
    string ans="";
    for(int i=0;i<zero;i++) {
        ans+='0';
    }
    for(int i=0;i<one;i++) {
        ans+='1';
    }
    // cout<<"curr ans"<<ans<<'
';
    // string res="";
    int rem=n-(zero+one);
    if(rem%2!=0) {
        for(int i=0;i<rem;i++) {
            if(i%2==0) ans='1'+ans;
            else ans='0'+ans;
        }
    }
    else {
        for(int i=0;i<rem;i++) {
            if(i%2==0) ans+='0';
            else ans+='1';
        }
    }
    cout<<ans<<'
';
    return;
    // 6 4
    // 000111
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
}