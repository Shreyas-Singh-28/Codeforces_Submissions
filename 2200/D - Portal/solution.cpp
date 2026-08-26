#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    int n,x,y;cin>>n>>x>>y;
    x-=1;
    y-=1;
    vector<int> a(n);
    vector<int> l;
    vector<int> m;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        if(i<=x || i>y) l.push_back(a[i]);
        else m.push_back(a[i]);
    }
    int l_size=static_cast<int>(l.size());
    int m_size=static_cast<int>(m.size());
    int m_min=*min_element(m.begin(),m.end());
    int ind=-1;
    vector<int> m_new(m_size);
    for(int i=0;i<m_size;i++) {
        if(m[i]==m_min) {
            ind=i;
            break;
        }
    }
    for(int i=0;i<m_size;i++) {
        m_new[i]=m[(ind+i)%m_size];
    }
    int i=0,j=0;
    while(i<l_size && j<m_size && l[i]<m_new[j]) {
        cout<<l[i++]<<' ';
    }
    while(j<m_size) {
        cout<<m_new[j++]<<' ';
    }
    while(i<l_size) {
        cout<<l[i++]<<' ';
    }
    cout<<'
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