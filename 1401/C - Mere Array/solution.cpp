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
    int min_ele=*min_element(a.begin(),a.end());
    vector<int> sorted=a;
    sort(sorted.begin(),sorted.end());
    vector<int> change;
    for(int i=0;i<n;i++) {
        if(a[i]!=sorted[i]) {
            change.push_back(a[i]);
        }
    }
 
    for(int i=0;i<change.size();i++) {
        if(__gcd(min_ele,change[i])!=min_ele) {
            cout<<"NO
";return;
        }
    }
    cout<<"YES
";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
}