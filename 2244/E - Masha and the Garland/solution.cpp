#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    int n,q;
    cin>>n>>q;
    string s;
    cin>>s;
    vector<int> vio(n,0);
    for(int i=1;i<n;i++) {
        if(s[i]==s[i-1]) vio[i]=vio[i-1]+1;
        else vio[i]=vio[i-1];
    }
    // cout<<"solve: ";
    // vector<int> pref_0(n);
    // vector<int> pref_1(n);
    // int temp=0;
    // pref_0[0]=0;
    // if(s[0]=='0') {
    //     temp++;
    //     pref_0[0]=1;
    // }
    // cout<<pref_0[0]<<' ';
    // for(int i=1;i<n;i++) {
    //     if(s[i]=='0') {
    //         temp++;
    //         pref_0[i]=max(temp,pref_0[i-1]);
    //     }
    //     else {
    //         temp=0;
    //         pref_0[i]=pref_0[i-1];
    //     }
    //     cout<<pref_0[i]<<' ';
    // }
    // cout<<'
';
    // temp=0;
    // pref_1[0]=0;
    // if(s[0]=='1') {
    //     temp++;
    //     pref_1[0]=1;
    // }
    // cout<<pref_1[0]<<' ';
    // for(int i=1;i<n;i++) {
    //     if(s[i]=='1') {
    //         temp++;
    //         pref_1[i]=max(temp,pref_1[i-1]);
    //     }
    //     else {
    //         temp=0;
    //         pref_1[i]=pref_1[i-1];
    //     }
    //     cout<<pref_1[i]<<' ';
    // }
    while(q--) {
        int l,r,k;
        cin>>l>>r>>k;
        r--,l--;
        int viol=vio[r]-vio[l];
        if((viol+1)/2<=k) cout<<"YES
";
        else cout<<"NO
";
    }
    return;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
}