#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        string sub = s.substr(0,s.length()-2);
        sub.append("i");
        cout<<sub<<endl;
    }
    return 0;
}