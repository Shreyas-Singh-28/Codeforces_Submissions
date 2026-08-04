#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    int n;cin>>n;
    int total=0;
    vector<int> a(n);
    for(int &x:a) {
        cin>>x;
        total+=x;
    }
    // total-=a.back();
    // int neg_pair=0;
    // int pos_pair=0;
    // for(int i=0;i<n-1;i++) {
    //     if(a[i]==a[i+1]) {
    //         if(a[i]==-1) neg_pair++;
    //         else pos_pair++;
    //         i++;
    //     }
    // }
    if(total%4==0) {
        cout<<"YES
";
    }
    else {
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