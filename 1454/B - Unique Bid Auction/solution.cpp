#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    int n;cin>>n;
    vector<int> a(n);
    map <int,int> m;
    for(auto &x:a) {
        cin>>x;
        m[x]++;
    }
    int value=0;
    // sort(a.begin(),a.end());
    for(auto &x:m) {
        if(x.second==1) {
            value=x.first;
            break;
        }
    }
    auto it=find(a.begin(),a.end(),value);
    if(it==a.end()) {
        cout<<-1<<'
';
    }
    else{
        cout<<(it-a.begin()+1)<<'
';
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
}