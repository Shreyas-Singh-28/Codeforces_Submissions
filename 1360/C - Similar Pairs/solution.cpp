#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    if(n&1) {
        cout<<"NO
";
        return;
    }
    vector<int> a(n);
    int even = 0, odd = 0;
    for (int &x : a) {
        cin >> x;
        if (x %2) odd++;
        else even++;
    }
    sort(a.begin(), a.end());
    if (even % 2 == 0 && odd % 2 == 0) {
        cout << "YES
";
        return;
    }
    for (int i = 1; i < n; i++) {
        if (a[i] - a[i - 1] == 1) {
            cout << "YES
";
            return;
        }
    }
    cout << "NO
";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
}