#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
// 1 2 4 6 7 9
// 1 2 4 1 2 4
// 1 0 0 0 1 0
 
// 
 
// if a and b are both numbers, 
// then if we check for a,
// then a%x + b%x == x
// a%y + b%y == y
 
// a%x - x == -b%x
// a%y - y == -b%y
// x + y -a%x -a%y = b%x + b%y
// x + y -(a%x + a%y) = (b%x + b%y)
 
// 1 2 2 3 4 7 9 13 15
// 1 2 2 3 4 1 3 1  3
// 1 0 0 1 0 1 1 1  1
 
// 6 7 7 7 7 9 10 10 10
// 1 2 2 2 2 4 0  0  0
// 0 1 1 1 1 3 4  4  4
 
void solve() {
    int n;cin>>n;
    int x,y;cin>>x>>y;
    vector<int> a(n);
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    map<pair<int,int>,int> cnt;
    ll res=0;
    for(int i=0;i<n;i++) {
        if(cnt.count({(x-(a[i]%x))%x,a[i]%y})) res+=cnt[{(x-a[i]%x)%x,a[i]%y}];
        cnt[{a[i]%x,a[i]%y}]++;
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