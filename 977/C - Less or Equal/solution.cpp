#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    int n,k;cin>>n>>k;
    vector<int> a(n);
    for(auto &x:a) cin>>x;
    sort(a.begin(),a.end());
    // int c=0;
    // if(a.size()>=2 && a[n-1]==a[n-2] && k==n-1) {
    // }
    // for(int i=0;i<k;) {
    //     if(a[i]<)
    // }
    if(n==k) {
        cout<<a[k-1]<<'
';
    }
    else if(k==0) {
        if(a[0]==1) {
            cout<<-1<<'
';
        }
        else{
            cout<<1<<'
';
        }
    }
    else if(a[k-1]==a[k]) {
        cout<<-1<<'
';
    }
    else{
        cout<<a[k-1]<<'
';
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}