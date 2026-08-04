#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    int n,k;cin>>n>>k;
    vector<int> a(n);
    for(auto &x:a)cin>>x;
    int max_val = *max_element(a.begin(),a.end());
    int min_index = *min_element(a.begin(), a.end());
    vector<int> freq(max_val+1,0);
    for(int i=0;i<n;i++) {
        freq[a[i]]++;
    }
    for(int i=max_val-1;i>=0;i--) {
        freq[i]+=freq[i+1];
    }
    // for(auto &x:freq) cout<<x<<" ";
    int temp=0;
    int res=0;
    for(int i=max_val;i>min_index;i--) {
        temp+=freq[i];
        if(temp>k) {
            res++;
            temp=freq[i];
        }
    }
    if(temp>0) res++;
    cout<<res<<'
';
    return;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}