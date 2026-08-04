#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    int a,b;
    cin>>a>>b;
    if(a==b) {
        cout<<0<<'
';
        return;
    }
    if(a>b && (a-b)%2==1 || b>a && (b-a)%2==0) {
        cout<<2<<'
';
        return;
    }
    cout<<1<<'
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