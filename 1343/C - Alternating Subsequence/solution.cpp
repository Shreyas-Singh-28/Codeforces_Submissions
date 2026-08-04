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
    for(auto &x:a) cin>>x;
    ll res=0;
    for(int i=0;i<n;i++) {
        int h=a[i];
        if(a[i]>0) {
            while(i<n && a[i]>0) {
                h=max(h,a[i]);
                i++;
            }
        }
        else{
            while(i<n && a[i]<0) {
                h=max(h,a[i]);
                i++;
            }
        }
        i--;
        res+=h;
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