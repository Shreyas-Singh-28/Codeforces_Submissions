#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
// 8 8 4 4
 
// 8 3 5 2
// 0 8 11 16
// 10 7 2 0
 
void solve() {
    int n;cin>>n;
    vector<int> a(n);
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int &x:a) {
        cin>>x;
        pq.push(x);
        if((int)pq.size()>2) pq.pop();
    }
    int max2=pq.top();
    pq.pop();
    int max1=pq.top();
    pq.pop();
    vector<ll> left(n,0);
    vector<ll> right(n,0);
    vector<int> ans;
    for(int i=0;i<n-1;i++) {
        left[i+1]=left[i]+a[i];
    }
    for(int i=n-1;i>0;i--) {
        right[i-1]=right[i]+a[i];
    }
    for(int i=0;i<n;i++) {
        ll summ=left[i]+right[i];
        ll maxx=(a[i]==max1)?max2:max1;
        // summ-=maxx;
        if(summ==(2*maxx)) {
            ans.push_back(i+1);
        }
    }
    int len=static_cast<int>(ans.size());
    cout<<len<<'
';
    for(int i=0;i<len;i++) {
        cout<<ans[i]<<' ';
    }
    return;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}