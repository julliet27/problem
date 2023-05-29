#include<bits/stdc++.h>
#define endline "\n"
#define fast_io ios_base::sync_with_stdio(false)
#define ll long long
using namespace std;
int main(){
    fast_io;
    ll t;cin>>t;
    vector<ll>vec1(t,0),vec2(t,0);
    vector<ll>pref1(t,0),pref2(t,0);
    for(ll i=0;i<t;i++){
        ll tmp;cin>>tmp;
        vec1[i]=tmp;
        vec2[i]=tmp;
    }
    sort(vec2.begin(),vec2.end());
    pref1[0]=vec1[0];
    pref2[0]=vec2[0];
    for(ll i=1;i<t;i++) pref1[i]=pref1[i-1]+vec1[i];
    for(ll i=1;i<t;i++) pref2[i]=pref2[i-1]+vec2[i];
    ll p;cin>>p;
    for(ll i=0;i<p;i++){
        ll x,y,type;cin>>type>>x>>y;
        x--;
        y--;
        if(type==1){
            if (x==0) cout<<pref1[y]<<endline;
            else cout<<pref1[y]-pref1[x-1]<<endline;}
        else{
            if (x==0) cout<<pref2[y]<<endline;
            else cout<<pref2[y]-pref2[x-1]<<endline;}
    }
    return 0;
}