#include <bits/stdc++.h>
 
using namespace std;
using vi = vector<int>;
 
void solve() {
    int n;cin >> n;
    string s;cin>>s;
    int c=0;
    for (int i = 0; i < s.length()-1; i++)
    {
        if(s[i]==s[i+1]) c+=1;
    }
    cout<<c;
    
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}