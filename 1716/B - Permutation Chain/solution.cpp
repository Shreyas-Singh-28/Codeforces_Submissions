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
    for(int i=0;i<n;i++) {
        a[i]=i+1;
    }
    int l=0,r=n-1;
    int k=0;
    cout<<n<<'
';
    while(l<=r) {
        k++;
        for(int i=0;i<n;i++) {
            cout<<a[i]<<" ";
        }
        cout<<'
';
        swap(a[l],a[r]);
        l++;
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
}