#include <bits/stdc++.h>
 
using namespace std;
using vi=vector<int>;
using ll=long long;
 
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}
void solve() {
    long long n,k;cin>>n>>k;
    ll odd=(n+1)/2;
    ll even=n/2;\
    if(k<=odd) {
        cout<<2*k-1;
    }
    else{
        k-=odd;
        cout<<k*2;
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}