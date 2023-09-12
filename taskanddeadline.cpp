#include <bits/stdc++.h>
#define endline "\n"
#define fast_io ios_base::sync_with_stdio(false)
#define ll long long
using namespace std;
int main()
{
    fast_io;
    ll t;cin>>t;
    vector<pair<ll,ll>>vec;
    for(ll i=0;i<t;i++){
        int a,d;cin>>a>>d;
        vec.push_back(make_pair(a,d));
    }
    sort(vec.begin(),vec.end());
    ll sum=0,ans=0;
    for(auto i:vec){
        sum+=i.first;
        ans+=(i.second-sum);
    }
    cout<<ans<<endline;
    return 0;
}