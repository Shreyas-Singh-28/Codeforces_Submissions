#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    int n;cin>>n;
    vector<int> a(n);
    int odd=0;
    int even_a=0,even_b=0;
    for(int &x:a) {
        cin>>x;
        if(x%2==1) odd++;
        else if(x%4==0) even_a++;
        else if(x%4==2) even_b++;
    }
    cout<<max({odd,even_a,even_b})<<'
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