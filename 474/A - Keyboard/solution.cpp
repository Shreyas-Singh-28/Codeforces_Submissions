#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    char ch;
    cin>>ch;
    string letters="qwertyuiopasdfghjkl;zxcvbnm,./";
    string input;
    cin>>input;
    string result;
    for(int i=0;i<input.length();i++) {
        int in=letters.find(input[i]);
        if(ch=='R') result+=letters[in-1];
        else result+=letters[in+1];
    }
    cout<<result<<endl;
    return 0;
}