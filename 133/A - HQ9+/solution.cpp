#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string p;
    getline(cin,p);
    for(int i=0;i<p.length();i++) {
        if(p.at(i)=='H' || p.at(i)=='Q' || p.at(i)=='9') {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}