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
        ll n,a;cin>>n>>a;
        vector<ll>pref(n+1,0);
        vector<ll>d(n+1,0);
        ll c,ans=0;
        for(int i=1;i<=n;i++){
            cin>>c>>d[i];
            pref[i]=pref[i-1]+c;
        }
        for(ll i=1;i<=n;i++){
            ll low=d[i],high=d[i];
            for(ll j=i;j<=n;j++){
                low=min(d[j],low);
                high=max(d[j],high);
                ll tmp=(j-i+1)*a-(high-low)*(high-low)-(pref[j]-pref[i-1]);
                ans=max(ans,tmp);

            }
        }
        cout<<ans<<endline;

    }
    return 0;
}