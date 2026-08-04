#include <bits/stdc++.h>
 
using namespace std;
using vi=vector<int>;
using ll=long long;
 
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}
void solve() {
    int l,r;cin>>l>>r;
    if(r>=(2*l)) {
        cout<<l<<" "<<2*l<<'
';
        return;
    }
    cout<<-1<<" "<<-1<<'
';
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
}