#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    int sumn=0;
    while(t--) {
        int n;
        cin>>n;
        sumn+=n;
        if(sumn>200000) {
            exit(1);
        }
        int arr[n];
        for(int i=0;i<n;i++) {
            cin>>arr[i];
        }
        cout<<accumulate(arr,arr+n,0)-(sizeof(arr)/sizeof(arr[0])-1)<<endl;
    }
    return 0;
}