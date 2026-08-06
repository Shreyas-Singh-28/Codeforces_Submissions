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
    vector<vector<int>> a(n,vector<int>(m));
    vector<int> m_max(m);
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin>>a[i][j];
        }
    }
    for(int i=n-1;i>=0;i--) {
        ll temp=0;
        int cnt=0;
        for(int j=0;j<m;j++) {
            pq.push(a[i][j]);
            if((int)pq.size()>m) pq.pop();
        }
        for(int j=m-1;j>=0;j--) {
            int ele=pq.top();
            pq.pop();
            m_max[j]=ele;
        }
        for(int j=0;j<m;j++) {
            temp+=m_max[j];
            pq.push(m_max[j]);
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