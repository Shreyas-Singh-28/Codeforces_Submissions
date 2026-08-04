#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    int n;cin>>n;
    int odd_1=0;
    int one=0;
    bool check=1;
    vector<int> a(n);
    for(int &x:a) {
        cin>>x;
        if(x==1) one++;
    }
    vector<int> b(n);
    bool zero=0;
    for(int i=0;i<n;i++) {
        cin>>b[i];
        if(a[i]!=b[i]) {
            check=0;
            if(a[i]==1) odd_1++;
        }
        else{
            if(a[i]==0) zero=1;
        }
    }
    if(odd_1==0 && check==1) {
        cout<<0<<'
';
    }
    else if(odd_1%2==1) {
        cout<<1<<'
';
    }
    else if(odd_1%2==0 && odd_1!=0) {
        cout<<2<<'
';
    }
    else if(one && zero) {
        cout<<2<<'
';
    }
    else{
        cout<<-1<<'
';
    }
    return;
 
    //1 0 0
    //1 1 0
 
    // 1 0 1 0 0
    // 0 1 0 1 1
 
    // 1 0 1 0 1 1
    // 1 1 1 1 1 0
 
    // 1 0 1 0 1 1
    // 0 1 0 1 0 0
 
    // if 0 no. 1's, then check if all correct, then 0, else -1
    // if odd no. pos 1's, then in 1 try
    // if even no. pos 1's then return 2
 
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
}