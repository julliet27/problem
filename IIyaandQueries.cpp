#include<bits/stdc++.h>
#define endline "\n"
#define fast_io ios_base::sync_with_stdio(false)
#define ll long long
using namespace std;
int main(){
    fast_io;
    ll n;cin>>n;
    vector<ll>vec(n,0);
    for(ll i=0;i<n;i++) cin>>vec[i];
    vector<ll>pref1(n,0),pref2(n,0);
    pref1[0]=vec[0];
    for(ll i=1;i<n;i++) pref1[i]=pref1[i-1]+vec[i];
    pref2[0]=pref1[0]*vec[0];
    for(ll i=1;i<n;i++) pref2[i]=pref1[i]*vec[1]+pref2[i-1];
    return 0;
}