#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    // int n;cin>>n;
    string s;cin>>s;
    int n=s.length();
    // int i=0;
    // for(;i<n;i++) {
    //     if(s[i]=='1') {
    //         i++;
    //         break;
    //     }
    // }
    // for(;i<n-1;i++) {
    //     if(s[i]=='0' && s[i+1]=='0') {
    //         cout<<"NO
";
    //         return;
    //     }
    // }
    int l=0,r=n-1;
    while(l<n-1) {
        if(s[l]=='1' && s[l+1]=='1') {
            break;
        }
        l++;
    }
    while(r>0) {
        if(s[r]=='0' && s[r-1]=='0') {
            break;
        }
        r--;
    }
    for(int i=l;i<r-1;i++) {
        if(s[i]=='1' && s[i+1]=='0'){
            cout<<"NO
";
            return;
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