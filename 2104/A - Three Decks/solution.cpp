#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
 
void solve() {
    int a,b,c;
    cin>>a>>b>>c;
    if(a>=b || b>=c) {
        cout<<"NO"<<endl;
        return;
    }
    if((a+b+c)%3==0 && c-b>=b-a) 
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