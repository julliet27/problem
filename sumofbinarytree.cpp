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
        ll sum=0;
        while(m>=1){
            sum+=m;
            m=m/2;
        }
        cout<<sum<<endline;
    }
    return 0;
}