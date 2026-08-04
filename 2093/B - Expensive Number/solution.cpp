#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    string num;cin>>num;
    // cout<<num;
    int res=0;
    int ind=-1;
    int len=num.length();
    for(int i=len-1;i>=0;i--) {
        if(num[i]!='0') {
            ind=i;
            break;
        }
    }
    for(int i=0;i<ind;i++) {
        if(num[i]!='0') res++;
    }
    res+=(len-1-ind);
    cout<<res<<'
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