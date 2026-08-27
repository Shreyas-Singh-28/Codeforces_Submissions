#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    int n;cin>>n;
    int zero=0,one=0,two=0,three=0,five=0;
    vector<int> a(n);
    for(int &x:a) cin>>x;
    int c=0;
    int i=0;
    bool ok=0;
    for(;i<n;i++) {
        c++;
        int x=a[i];
        if(x==0) zero++;
        else if(x==1) one++;
        else if(x==2) two++;
        else if(x==3) three++;
        else if(x==5) five++;
        if(zero>=3 && one>=1 && two>=2 && three>=1 && five>=1) {
            break;
        }
    }
    cout<<(i==n?0:c)<<'
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