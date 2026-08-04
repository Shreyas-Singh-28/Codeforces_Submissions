#include <bits/stdc++.h>
 
using namespace std;
using vi = vector<int>;
 
void solve() {
    int n; cin>>n;
    vector<int> nums(n);
    for(auto &x:nums) cin>>x;
    sort(nums.begin(),nums.end(),greater<>());
    for(int i=0;i<n-1;i++) {
        if(nums[i]==nums[i+1]) {
            cout<<-1<<"
";
            return;
        }
    }
    for(auto &x:nums) cout<<x<<" ";
    cout<<'
';
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
}