#include <bits/stdc++.h>
 
using namespace std;
using vi = vector<int>;
 
void solve() {
    int x;
    cin >> x;
    int res=0;
    while(x>=5) {
        x-=5;
        res+=1;
    }
    if(x>0) res+=1;
    cout<<res;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}