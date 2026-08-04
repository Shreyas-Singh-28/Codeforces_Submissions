#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    int n,m;cin>>n>>m;
    if(n<m) {
        cout<<-1<<'
';
        return;
    }
    if(((n+1)/2)%m==0) {
        cout<<(n+1)/2;
    }
    else cout<<(n+1)/2-((n+1)/2)%m+m;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}