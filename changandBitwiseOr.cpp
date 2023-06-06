#include <bits/stdc++.h>
#define endline "\n"
#define fast_io ios_base::sync_with_stdio(false)
#define ll long long
using namespace std;
int main()
{
    fast_io;
    int t;cin>>t;
    while(t--){
        ll n;cin>>n;
        ll ans=0;
        while(n--){
            ll a;cin>>a;
            ans=ans|a;
        }
        cout<<ans<<endline;
    }
    return 0;
}