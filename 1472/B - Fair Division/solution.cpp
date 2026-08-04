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
    int one=0,two=0;
    for(int i=0;i<n;i++) {
        if(a[i]==1) one++;
        else two++;
    }
    if(two%2==0) {
        if(one%2==0) {
            cout<<"YES
";
        }
        else cout<<"NO
";
    }
    else{
        if(one%2==0 && one>=2) {
            cout<<"YES
";
        }
        else cout<<"NO
";
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
}