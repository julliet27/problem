#include<bits/stdc++.h>
#define endline "\n"
#define fast_io ios_base::sync_with_stdio(false)
#define ll long long
using namespace std;
int main(){
    fast_io;
    ll n,k;cin>>n>>k;
    vector<ll>vec(n,0);
    ll left=0,right=n-1;
    for(ll i=0;i<n;i++) cin>>vec[i];
    for(ll i=0;i<k;i++){
        ll q;cin>>q;
        int num=lower_bound(vec.begin(),vec.end(),q)-vec.begin();
        if(vec[num]==q) cout<<num<<endline;
        else cout<<-1<<endline;
    }
    return 0;
}