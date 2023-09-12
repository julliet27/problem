#include<bits/stdc++.h>
#define endline "\n"
#define fast_io ios_base::sync_with_stdio(false)
#define ll long long
using namespace std;
int main(){
    fast_io;
    int t;cin>>t;
    vector<int>vec(t,0);
    vector<int>pref(t,0);
    for(int i=0;i<t;i++) cin>>vec[i];
    pref[0]=vec[0];
    for(int i=1;i<t;i++) pref[i]=pref[i-1]+vec[i];
    int p;cin>>p;
    for(int i=0;i<p;i++){
        int x,y;cin>>x>>y;
        if (x==0) cout<<pref[x]*vec[x]+pref[y]*vec[y]<<endline;
        else{
            int a=pref[x]-pref[x-1];
            int b=pref[y]-pref[x-1];
            cout<<a*vec[x]+b*vec[y]<<endline;
        }
    }
    return 0;
}