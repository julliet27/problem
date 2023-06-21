#include <bits/stdc++.h>
#define endline "\n"
#define fast_io ios_base::sync_with_stdio(false)
#define ll long long int 
using namespace std;
int main()
{
    fast_io;
    ll t;cin>>t;
    for(ll i=0;i<t;i++){
        ll m;cin>>m;
        ll cnt=0,cur=0,sum=0;
        for(ll j=0;j<m;j++){
            ll n;cin>>n;
            sum+=abs(n);
            if(n<0) cnt++;
            else if(n>0){
                if(cnt) cur++;
                cnt=0;
            }
        }
        if(cnt) cur++;
        cout<<sum<<" "<<cur<<endline;
    }
    return 0;
}