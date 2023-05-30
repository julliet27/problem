#include<bits/stdc++.h>
#define endline "\n"
#define fast_io ios_base::sync_with_stdio(false)
#define ll long long
using namespace std;
int main(){
    fast_io;
    ll n,k,q;cin>>n>>k>>q;
    int count=0;
    vector<ll>range(2e5+1,0);
    vector<ll>first(2e5+1,0);
    vector<ll>second(2e5+1,0);
    for(ll i=0;i<n;i++){
        ll l,r;cin>>l>>r;
        first[l]++;
        first[r+1]--;
    }
    for(ll i=1;i<=2e5+1;i++){
        second[i]=second[i-1]+first[i];
    }
    for(ll i=1;i<=2e5+1;i++){
        if(k<=second[i]) count++;
        range[i]=count;
    }
    for(ll i=0;i<q;i++){
        ll a,b;cin>>a>>b;
        cout<<range[b]-range[a-1]<<endline;
    }
    return 0;
}