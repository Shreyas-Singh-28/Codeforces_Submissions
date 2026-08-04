#include <bits/stdc++.h>
 
using namespace std;
using vi=vector<int>;
using ll=long long;
 
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}
void solve() {
    int n;cin>>n;
    vector<int> a(n);
    for(auto &x:a) cin>>x;
    sort(a.begin(),a.end(),greater<>());
    
    for(int i=0;i<n-1;i++) {
        if(a[0]%a[i]==0) {
            if(a[i]==a[i+1]) {
                cout<<a[0]<<" "<<a[i];
                return;
            }
        }
        else{
            cout<<a[0]<<" "<<a[i];
            return;
        }
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}