#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    int k;cin>>k;
    int cnt=0;
    vector<int> a(k);
    for(int &x:a) cin>>x;
    for(int i=0;i<k;i++) {
        if(a[i]>=3) {
            cout<<"YES
";
            return;
        }
        if(a[i]>=2) {
            cnt++;
        }
    }
    if(cnt>=2) {
        cout<<"YES
";
    }
    else{
        cout<<"NO
";
    }
    return;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
}