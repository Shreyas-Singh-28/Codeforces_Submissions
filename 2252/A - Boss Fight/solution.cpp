#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
// 10 5 4 10 10 10 
// 10 10 10
 
void solve() {
    int n;cin>>n;
    vector<int> a(n);
    map<int,int,greater<int>> mp;
    for(int &x:a) {
        cin>>x;
        mp[x]++;
    }
    ll res=0;
    int last=-1;
    bool ok=0;
    while(n>0) {
        int val=-1;
        int max_freq=0;
        for(auto au=mp.begin();au!=mp.end() && n>0;au++) {
            if(au->second!=0 && au->first!=last)  {
                if(au->second>max_freq) {
                    max_freq=au->second;
                    val=au->first;
                }
            }
        }
        if(val==-1) {
            val=last;
            ok=1;
        }
        res+=val;
        mp[val]--;
        last=val;
        n--;
        if(ok) break;
    }
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