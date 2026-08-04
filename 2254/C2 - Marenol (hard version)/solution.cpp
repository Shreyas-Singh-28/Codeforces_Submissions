#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    int n;cin>>n;
    string a;cin>>a;
    string b;cin>>b;
    vector<int> even_dist_a;
    vector<int> odd_dist_a;
    vector<int> even_dist_b;
    vector<int> odd_dist_b;
    for(int i=0;i<n;i+=2) {
        if(a[i]=='1') even_dist_a.push_back(i);
        if(b[i]=='1') even_dist_b.push_back(i);
    }
    for(int i=1;i<n;i+=2) {
        if(a[i]=='1') odd_dist_a.push_back(i);
        if(b[i]=='1') odd_dist_b.push_back(i);
    }
    if(((int)even_dist_a.size()!=(int)even_dist_b.size()) || ((int)odd_dist_a.size()!=(int)odd_dist_b.size())) {
        cout<<-1<<'
';
        return;
    }
    long long res=0;
    for(int i=0;i<(int)even_dist_a.size();i++) {
        res+=(abs(even_dist_a[i]-even_dist_b[i])/2);
    }
    for(int i=0;i<(int)odd_dist_a.size();i++) {
        res+=(abs(odd_dist_a[i]-odd_dist_b[i])/2);
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