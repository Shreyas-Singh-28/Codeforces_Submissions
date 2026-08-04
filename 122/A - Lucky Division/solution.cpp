#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    int n;cin>>n;
    vector<int> a={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    for(auto &x:a) {
        if(n%x==0) {
            cout<<"YES";
            return;
        }
    }
    cout<<"NO";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}