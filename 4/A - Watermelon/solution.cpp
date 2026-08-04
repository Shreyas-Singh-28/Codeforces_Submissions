#include <iostream>
using namespace std;
 
int main() {
    short x;
    cin>>x;
    if(x%2!=0 || x==2) 
        cout<<"NO";
    else {
        cout<<"YES";
    }
    return 0;
}