#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    int n,m;
    cin>>n>>m;
    vector<ll> a(n);
    vector<ll> occ(n,0);
    for(ll &x:a) cin>>x;
    while(m--) {
        int x;cin>>x;
        occ[x-1]=1;
    }
    // cout<<"solving"<<'
';
    // for(auto &ele:occ) cout<<ele<<' ';
    ll cur_sum=0;
    ll final_sum=0;
    for(int i=n-1;i>=0;i--) {
        cur_sum=a[i];
        if(occ[i]==1) {
            i--;
            while(i>=0 && occ[i]==0) {
                cur_sum+=a[i];
                i--;
            }
            i++;
            if(cur_sum<0) {
                final_sum+=(cur_sum*(-1));
            }
            else{
                final_sum+=cur_sum;
            }
        }
        else{
            final_sum+=cur_sum;
        }
    }
    cout<<final_sum<<'
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