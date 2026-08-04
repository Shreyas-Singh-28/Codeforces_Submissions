#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    int n,x,y;
    cin>>n>>x>>y;
    vector<int> a(n);
    for(int &x:a) cin>>x;
    int jump=gcd(x,y);
    for(int i=0;i<n;i++) {
        if(abs(a[i]-(i+1))%jump==0) continue;
        else {
            cout<<"NO
";
            return;
        }
    }
    cout<<"YES
";
    return;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
}