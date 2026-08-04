#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    int n;cin>>n;
    vector<int> a(n);
    for(int &x:a) cin>>x;
    vector<int> b=a;
    if(n%2==1) {
        cout<<"NO
";
        return;
    }
    sort(b.begin(),b.end());
    int k=b[n/2]-1;
    for(int i=0;i<n;i++) {
        if(i%2==0) {
            if(a[i]>k) continue;
            else {
                cout<<"NO
";
                return;
            }
        }
        else{
            if(a[i]<k) continue;
            else {
                cout<<"NO
";
                return;
            }
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