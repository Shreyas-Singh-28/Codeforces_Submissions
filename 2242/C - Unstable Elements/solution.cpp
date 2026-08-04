#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    int n,k;cin>>n>>k;
    vector<int> a(n);
    unordered_map<int,int> mp;
    unordered_set<int> st;
    for(int &x:a) {
        cin>>x;
        mp[x]++;
    }
    int res=0;
    int current_size=n;
    while(current_size>0) {
        if(k>=current_size && (k-current_size)%(int)mp.size()==0 && !st.count((int)mp.size())) {
            st.insert((int)mp.size());
            res++;
        }
        current_size-=(int)mp.size();
        for(auto it=mp.begin();it!=mp.end(); ) {
            if(--(it->second)==0)
                it=mp.erase(it);
            else
                it++;
        }
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