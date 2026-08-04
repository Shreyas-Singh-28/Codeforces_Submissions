#include <bits/stdc++.h>
 
using namespace std;
using vi = vector<int>;
 
void solve() {
    string s;cin>>s;
    string res="";
    int curr=0;
    for (int i = 0; i < s.length(); i++)
    {
        if(s.substr(i,3)=="WUB") {
            if(curr==1) {
                res+=" ";
                curr=0;
            }
            i+=2;
        }
        else{
            res+=s[i];
            curr=1;
        }
    }
    cout<<res;
    
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}