#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    int n;cin>>n;
    vector<int> a(n);
    // vector<int> freq(3,0);
    for(int &x:a) {
        // freq[x-1]++;
        cin>>x;
    }
    int i=0;
    int temp=0;
    for(;i<n;i++) {
        if(a[i]>=2) temp--;
        else temp++;
        if(temp>=0) break;
    }
    i++;
    if(i<n && a[i]==3 && temp>0) i++;
    temp=0;
    for(;i<n;i++) {
        if(a[i]>=3) temp--;
        else temp++;
        if(temp>=0) break;
    }
    i++;
    if(i<n) {
        cout<<"YES
";
    }
    else{
        cout<<"NO
";
    }
    return;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
}