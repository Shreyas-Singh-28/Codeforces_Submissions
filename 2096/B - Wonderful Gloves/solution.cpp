#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n,k;
        long long c=0;
        cin>>n>>k;
        long long l[n],r[n];
        for(long long int &i:l)
            cin>>i;
        for(long long int &i:r)
            cin>>i;
        // if(n==k) {
        //     c=accumulate(l,l+n,0)+accumulate(r,r+n,0);
        //     cout<<c<<endl;
        //     return 0;
        // }
        for(int i=0;i<n;i++) {
            if(l[i]>=r[i]) {
                c=c+l[i];
                l[i]=r[i];
            }
            else {
                c=c+r[i];
            }
        }
        sort(l,l+n,greater<int>());
        for(int i=0;i<k-1;i++) {
            c=c+l[i];
        }
        cout<<++c<<endl;
    }
    return 0;
}