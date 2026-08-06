#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
// max ans-number of col
 
void solve() {
    int n,m;cin>>n>>m;
    vector<int> v(n);
    for(int &x:v) cin>>x;
    int res=m;
    int stab=INT_MAX;
    vector<vector<int>> a(n,vector<int>(m));
    vector<int> m_max;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin>>a[i][j];
        }
    }
    for(int i=n-1;i>=0;i--) {
        ll temp=0;
        int cnt=0;
        for(int j=0;j<m;j++) {
            m_max.push_back(a[i][j]);
        }
        sort(m_max.begin(),m_max.end(),greater<>());
        if((int)m_max.size()>m) m_max.resize(m);
        for(int j=0;j<m;j++) {
            temp+=m_max[j];
            cnt++;
            if(temp>=v[i]) break;
        }
        res=min(res,cnt);
    }
    cout<<res<<'
';
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
}