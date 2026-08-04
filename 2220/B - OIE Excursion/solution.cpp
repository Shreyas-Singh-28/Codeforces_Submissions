#include <bits/stdc++.h>
 
using namespace std;
using vi = vector<int>;
 
void solve() {
    int n,m; cin>>n>>m;
    vector<int> a(n);
    for(auto &x:a) cin>>x;
    int c=1;
    for(int i=0;i<n-1;i++) {
        if(a[i]==a[i+1]) {
            c++;
            if(c==m) {
                cout<<"NO
";
                return;
            }
        }
        else{
            c=1;
        }
    }
    cout<<"YES
";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
}
 