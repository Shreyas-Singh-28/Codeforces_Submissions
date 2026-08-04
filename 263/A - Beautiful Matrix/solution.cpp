#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    // int n;cin>>n;
    int indi,indj;
    for(int i=0;i<5;i++) {
        for(int j=0;j<5;j++) {
            int x;
            cin>>x;
            if(x==1) {
                indi=i;
                indj=j;
            }
        }
    }
    cout<<abs(indi-2)+abs(indj-2);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}