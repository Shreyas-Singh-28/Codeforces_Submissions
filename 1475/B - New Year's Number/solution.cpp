#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
 
void solve() {
    int n;
    cin>>n;
    while(n%2021!=0 && n>0)
        n-=2020;
    if(n%2021==0) 
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int tt;
    cin>>tt;
    while(tt--) {
        solve();
    }
    return 0;
}