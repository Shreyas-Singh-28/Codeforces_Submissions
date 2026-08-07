#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
void solve(){
	int n; cin >> n;
	ll total = 0;
	map<ll, int> freq;
	ll maxx = 0, ele = -1;
	for(int i=0; i<n; i++){
		ll x; cin >> x;
		total += x;
		freq[x]++;
		if(freq[x] > maxx){
			maxx = freq[x];
			ele = x;
		}
	}
	ll cur = 2*maxx - n - 2;
	if(cur>0) total -= cur * ele;
	cout << total << "
";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
}