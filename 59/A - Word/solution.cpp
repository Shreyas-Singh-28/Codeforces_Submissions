#include <bits/stdc++.h>
 
using namespace std;
using vi = vector<int>;
 
void solve() {
    string s;
    cin>>s;
    int lower=0,upper=0;
    for(auto ch:s) {
        if(ch>='A' && ch<='Z') upper++;
        else lower++;
    }
    // cout<<"Lower:"<<lower<<"Upper:"<<upper;
    for(auto &ch:s) {
        if(lower<upper) ch=toupper(ch);
        else ch=tolower(ch);
    }
    for(auto ch:s) {
        cout<<ch;
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}