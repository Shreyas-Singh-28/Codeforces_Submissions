#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
 
void solve() {
    int n;
    int c{};
    cin>>n;
    vector<int>arr(n);
    for(int &i:arr) 
    cin>>i;
    sort(arr.begin(), arr.end());
    for (int i=1;i<arr.size();i++) {
        if (arr[i]!=arr[i-1]) {
            c++;
        }
    }
    cout<<c+1<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int tt;
    cin>>tt;
    while(tt--) {
        solve();
    }
    return 0;
}