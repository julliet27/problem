#include <bits/stdc++.h>
#define endline "\n"
#define fast_io ios_base::sync_with_stdio(false)
#define ll long long int 
using namespace std;
int main()
{
    fast_io;
    int n,k;cin>>n>>k;
    ll ans=0,cnt=1;
    while(cnt<n){
        ans++;
        cnt+=cnt;
        if(cnt>k)break;
    }
    ll need=n-cnt;
    ans+=ceil((need*1.0)/(k*1.0));
    cout<<ans<<endline;

    return 0;
}