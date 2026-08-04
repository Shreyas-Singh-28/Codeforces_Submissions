#include <bits/stdc++.h>
 
using namespace std;
using vi = vector<int>;
 
void solve() {
    int n; cin>>n;
    int k; cin>>k;
    vi h(n);
    for(auto &x:h) cin>>x;
    // cout<<n<<k;
    int curr=0;
    int temp=0;
    int ind=0;
    for(int i=0;i<n;i++) {
        if(i<k) {
            curr+=h[i];
            // cout<<"Curr: "<<curr;
            temp=curr;
        }
        else{
            temp=temp+h[i]-h[i-k];
            // cout<<"Temp: "<<temp;
            if(temp<curr) {
                curr=temp;
                ind=i-k+1;
            }
            // cout<<"Ind: "<<ind;
        }
    }
    cout<<ind+1;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}