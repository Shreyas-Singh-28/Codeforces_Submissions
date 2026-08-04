#include <bits/stdc++.h>
 
using namespace std;
using vi = vector<int>;
 
void solve() {
    long long n; cin>>n;
    vector<long long> b(n);
    for(auto &x:b) cin>>x;
    long long x=0,y=0;
    long long max_ele = *max_element(b.begin(),b.end());
    long long min_ele = *min_element(b.begin(),b.end());
    if(max_ele==min_ele) {
        cout<<0<<" "<<(n*(n-1))/2;
        return;
    }
    for(int i=0;i<n;i++) {
        if(b[i]==max_ele) x++;
        else if(b[i]==min_ele) y++;
        else continue;
    }
    cout<<max_ele-min_ele<<" "<<x*y;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}