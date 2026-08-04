#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
bool isPrime(int a) {
    for(int i=2;i<a-1;i++) {
        if(a%i==0) return false;
    }
    return true;
}
 
void solve() {
    int d;cin>>d;
    int a=d+1,b;
    while(!isPrime(a)) {
        a++;
    }
    b=a+d;
    while(!isPrime(b)) {
        b++;
    }
    cout<<a*b<<'
';
    return;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
}