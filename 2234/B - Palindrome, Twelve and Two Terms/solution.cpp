#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
bool isPalindrome(long long x) {
    string s=to_string(x);
    int l=0,r=s.length()-1;
    while(l<r){
        if(s[l]!=s[r]) return false;
        l++;
        r--;
    }
    return true;
}
 
void solve() {
    long long n;
    cin>>n;
    for(long long i=n%12;i<=n;i+=12) {
        // cout<<i;
        if(isPalindrome(i)) {
            cout<<i<<" "<<n-i<<'
';
            return;
        }
    }
    cout<<-1<<'
';
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
}