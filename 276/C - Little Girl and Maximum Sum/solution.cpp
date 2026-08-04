#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <array>
#include <deque>
#include <list>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <numeric>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <cassert>
#include <climits>
 
using namespace std;
 
const int mod = 1e9 + 7;
const long long INF = 1e18;
 
#define ll int64_t
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 
int main() 
{
    fastio
    int n, q;
    cin >> n >> q;
    vector<ll> a(n);
    vector<ll> freq2(n+1,0);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i]; 
    } 
    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        l--;    r--;
        freq2[l]++;     
        freq2[r+1]--;
    }
    for (int i = 1; i < n; i++)
    {
        freq2[i] += freq2[i-1];
    }
    freq2.pop_back();
    sort(freq2.begin(), freq2.end());
    sort(a.begin(), a.end());
    vector<int> anew(n);
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += (freq2[i]*a[i]);
    }
    cout << ans << endl;
    return 0;
}