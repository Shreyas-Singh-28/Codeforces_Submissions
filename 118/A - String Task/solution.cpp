#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    string s;cin>>s;
    string res="";
    for(auto &x:s) {
        // char ch=(char)tolower(x);
        if((char)tolower(x)=='a' || (char)tolower(x)=='e' || (char)tolower(x)=='i' || (char)tolower(x)=='o' || (char)tolower(x)=='u' || (char)tolower(x)=='y') {
            continue;
        }
        else{
            res+='.';
            if(isupper(x)) res+=tolower(x);
            else res+=x;
        }
    }
    
    cout<<res;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}