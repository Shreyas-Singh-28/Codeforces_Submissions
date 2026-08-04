#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        cin.ignore();
        string s;
        cin>>s;
        int min=1,max=n;
        int arr[n];
        for(int i=s.length()-1;i>=0;i--) {
            if(s[i]=='<') {
                arr[i+1]=min++;
            }
            else if(s[i]=='>') {
                arr[i+1]=max--;
            }
        }
        arr[0]=min;
        for(int &i: arr) {
            cout<<i<<" ";
        }
        cout<<endl;    
    }
    return 0;
}