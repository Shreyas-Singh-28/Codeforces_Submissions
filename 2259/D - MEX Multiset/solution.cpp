#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;
const ll LLINF = 1e18;
const int MOD = 1e9+7;
 
// 0 0 1 1 1 2
 
 
void solve() {
    int n;cin>>n;
    vector<int> a(n);
    map<int,int> mp;
    for(int &x:a) {
        cin>>x;
        mp[x]++;
    }
    set<int> st1;
    set<int> st2;
    set<int> st3;
    map<int,int> mp1;
    map<int,int> mp2;
    map<int,int> mp3;
    for(auto it=mp.begin();it!=mp.end();it++) {
        int val=it->first;
        int freq=it->second;
        if(freq>=2) {
            st1.insert(val);
            st2.insert(val);
            mp1[val]++;
            mp2[val]++;
            freq-=2;
            mp1[val]+=freq;
        }
        else {
            st3.insert(val);
            mp3[val]=freq;
        }
    }
    int mex1=0,mex2=0,mex3=0;
    for(auto it=st1.begin();it!=st1.end();it++) {
        int val=*it;
        if(val==mex1) mex1++;
        else break;
    }
    for(auto it=st2.begin();it!=st2.end();it++) {
        int val=*it;
        if(val==mex2) mex2++;
        else break;
    }
    for(auto it=st3.begin();it!=st3.end();it++) {
        int val=*it;
        if(val==mex3) mex3++;
        else break;
    }
    // cout<<mex1<<' '<<mex2<<' '<<mex3<<'
';
    if(mex1+mex2+mex3<2*max({mex1,mex2,mex3})) {
        cout<<"NO
";
        return;
    }
    cout<<"YES
";
    for(int i=0;i<n;i++) {
        int val=a[i];
        if(mp1[val]) {
            cout<<'A';
            mp1[val]--;
        }
        else if(mp2[val]) {
            cout<<'B';
            mp2[val]--;
        }
        else {
            cout<<'C';
            mp3[val]--;
        }
    }
    cout<<'
';
    return;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
}