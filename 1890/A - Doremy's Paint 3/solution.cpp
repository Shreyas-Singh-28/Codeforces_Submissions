#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    int n;cin>>n;
    vector<int> a(n);
    for(auto &x:a) cin>>x;
    int unique=1;
    sort(a.begin(),a.end());
    for(int i=0;i<n-1;i++) {
        if(a[i]!=a[i+1]) unique++;
    }
    if(unique>=3) {
        cout<<"NO"<<'
';
        return;
    }
    if(unique==1) {
        cout<<"YES"<<'
';
        return;
    }
    int cnt1=1,cnt2=0;
    for(int i=0;i<n-1;i++) {
        if(a[i]==a[i+1]) cnt1++;
        else{
            cnt2=n-cnt1;
            break;
        }
    }
    // cout<<cnt1<<" "<<cnt2<<'
';
    if(abs(cnt1-cnt2)<=1 && abs(cnt1-cnt2)>=0) {
        cout<<"YES"<<'
';
        return;
    }
    cout<<"NO"<<'
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