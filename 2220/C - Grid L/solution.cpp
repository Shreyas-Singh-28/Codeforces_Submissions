#include <bits/stdc++.h>
 
using namespace std;
using vi = vector<int>;
#define ll int64_t
 
void solve() {
    // int p,q;cin>>p>>q;
    // int len=p*1+q*2;
    // int n=1,m=2;
    // if(len<4) {
    //     cout<<-1<<'
';
    //     return;
    // }
    // if(len==4) {
    //     cout<<1<<" "<<1<<'
';
    //     return;
    // }
    // if(len==7) {
    //     cout<<1<<" "<<2<<'
';
    //     return;
    // }
    // int inc=5;
    // int i=7;
    // while(i<=len) {
    //     if(len==(i+inc)) {
    //         cout<<++n<<" "<<m<<'
';
    //         return;
    //     }
    //     else if(len==(i+inc*2)) {
    //         cout<<++n<<" "<<++m<<'
';
    //         return;
    //     }
    //     i=i+(inc*2);
    // }
    // cout<<-1<<'
';
 
    ll p,q;cin>>p>>q;
    ll len=p+q*2;
    int n=1,m=1;
    int i=4;
    int inc=3;
    while(i<=len) {
        // if((len-i)==0) {
        //     cout<<n<<" "<<m+(len-i)/inc<<'
';
        //     return;
        // }
        if((len-i)%inc==0) {
            ll h = (m+(len-i)/inc)*(n+1), v = ((m+(len-i)/inc) + 1)*(n);
            if(q <= min(h, v)){
                cout<<n<<" "<<m+(len-i)/inc<<'
';
                return;
            }
        }
        n++;m++;
        i=i+(inc+1)*2;
        inc+=2;
    }
    cout<<-1<<'
';
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
}