#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve() {
    string s; cin >> s;
    string target = "hello";
    
    int j = 0;
    for (char &c : s) {
        if (c == target[j]) j++;
        if (j == 5) break;
    }
 
    cout << (j == 5 ? "YES" : "NO");
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}