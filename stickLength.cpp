#include <bits/stdc++.h>
#define endline "\n"
#define fast_io ios_base::sync_with_stdio(false)
#define ll long long
using namespace std;
int main()
{
    fast_io;
    ll t;cin>>t;
    vector<ll>vec(t,0);
    for(ll i=0;i<t;i++)cin>>vec[i];
    sort(vec.begin(),vec.end());
    ll num=vec[(t-1)/2];
    ll ans=0;
    for(ll i:vec){
        ans+=abs(i-num);
    }
    cout<<ans<<endline;
    return 0;
}