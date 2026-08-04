#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    int n;cin>>n;
    string a;cin>>a;
    string b;cin>>b;
    int odd1=0,even1=0;
    int odd2=0,even2=0;
    for(int i=0;i<n;i++) {
        if(a[i]=='1') {
            if(i%2==0) even1++;
            else odd1++;
        }
    }
    for(int i=0;i<n;i++) {
        if(b[i]=='1') {
            if(i%2==0) even2++;
            else odd2++;
        }
    }
    cout<<((even1==even2 && odd1==odd2)?"YES
":"NO
");
    return;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
}