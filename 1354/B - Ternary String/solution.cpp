#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    string s;
    cin>>s;
    int n=s.length();
    int res=INF;
    int idx1=-1,idx2=-1,idx3=-1;
    for(int i=0;i<n;i++) {
        if(s[i]=='1') idx1=i;
        else if(s[i]=='2') idx2=i;
        else idx3=i;
        if(idx1!=-1 && idx2!=-1 && idx3!=-1) {
            res=min(max(idx1,max(idx2,idx3))-min(idx1,min(idx2,idx3))+1,res);
        }
    }
    if(res==INF) {
        cout<<0<<'
';
        return;
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