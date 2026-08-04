#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    int n;cin>>n;
    vector<int> a(n);
    ll s=0;
    for(auto &x:a) {
        cin>>x;
        s+=x;
    }
    if(s%n!=0) {
        cout<<-1<<'
';return;
    }
    int num=s/n;
    int res=0;
    sort(a.begin(),a.end());
    for(int i=n-1;i>=0;i--) {
        if(a[i]>num) {
            res++;
        }
        // else{
 
        // }
    }
    cout<<res<<'
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