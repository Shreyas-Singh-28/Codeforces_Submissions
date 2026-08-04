#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    int n;cin>>n;
    // cout<<"Solving: ";
    vector<int> a(4*n);
    for(auto &x:a) cin>>x;
    sort(a.begin(),a.end());
    int l=0,r=4*n-1;
    int area=0;
    while(l<r) {
        int temp=1;
        if(a[l]==a[l+1] && a[r]==a[r-1]) {
            temp=a[l]*a[r];
            // cout<<temp;
            if(area==0) area=temp;
            else{
                if(area!=temp) {
                    cout<<"NO
";return;
                }
            }
        }
        else{
            cout<<"NO
";return;
        }
        // cout<<"Area: "<<area;
        l+=2;r-=2;
    }
    cout<<"YES
";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
}