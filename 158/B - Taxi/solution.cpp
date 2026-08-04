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
    int n;
    cin >> n;
    vector<int> a(n), freq(5, 0);
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        freq[a[i]]++;
    }
    ans += (freq[2]/2);
    freq[2] %= 2;
    ans += freq[4];
    int M = min(freq[1], freq[3]);
    ans += M;
    freq[1] -= M;    freq[3] -= M;
    if (freq[3] == 0)
    {
        if (freq[2])
        {
            freq[1] += 2;
        }
        ans += (freq[1]/4);
        freq[1] %= 4;
        if (freq[1])
        {
            ans++;
        }
    }
    else{
        ans += freq[3];
        ans += freq[2];
    }
    cout << ans << endl;
    return 0;
}