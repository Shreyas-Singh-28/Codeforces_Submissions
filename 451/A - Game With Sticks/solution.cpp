#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int m{},n{};
    cin>>n>>m;
    int l=min(m,n);
    if(min(m,n)%2==1)
        cout<<"Akshat"<<endl;
    else
        cout<<"Malvika"<<endl;
    return 0;
}