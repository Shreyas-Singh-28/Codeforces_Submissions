#include <bits/stdc++.h>
 
using namespace std;
using vi = vector<int>;
 
void solve() {
    int n; cin>>n;
    int res{0};
    while(n--) {
        int a,b,c;cin>>a>>b>>c;
        if(a+b+c>=2) {
            res+=1;
        }
    }
    cout<<res;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}