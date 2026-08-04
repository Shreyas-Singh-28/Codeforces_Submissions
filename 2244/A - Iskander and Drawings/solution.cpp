#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    int n;cin>>n;
    string s;cin>>s;
    int max_len=0;
    int temp=0;
    for(char &ch:s) {
        if(ch=='#') temp++;
        else{
            max_len=max(temp,max_len);
            temp=0;
        }
    }
    max_len=max(temp,max_len);
    cout<<(max_len+1)/2<<'
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