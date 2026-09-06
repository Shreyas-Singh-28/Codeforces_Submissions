// 10
/*
1 9 - 9
2 8 - 8
3 7 - 21
4 6 - 12
5 5 - 5
*/
 
// 5
/*
1 4 - 4
2 3 - 6
*/
 
// 13
/*
1 12 - 12
2 11 - 22
3 10 - 10
4 9 - 36
5 8 - 40
6 7 - 42
*/
 
//15
/*
 
*/
 
//9
/*
1 8 - 8
2 7 - 14
3 6 - 6
4 5 - 20
*/
 
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
// 1 2 5 10
// 1 3 9
// 1 7
// 1 2
 
void solve() {
    int n;cin>>n;
    set<int> st;
    for(int i=1;i*i<=n;i++) {
        if(n%i==0) {
            st.insert(i);
            if(!st.count(n/i)) st.insert(n/i);
        }
    }
    int ans=INT_MAX;
    int end=n/2;
    for(auto it=st.begin();it!=st.end();it++) {
        int val=*it;
        if(val>end) break;
        ans=min(ans,n-val);
    }
    cout<<n-ans<<' '<<ans<<'
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