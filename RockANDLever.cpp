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
        int n;cin>>n;
        ll ans=0;
        vector<ll>vec(n,0);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        for(int j=31;j>=0;j--){
            ll cnt=0;
            for(int i=0;i<n;i++){
                if(vec[i]>=(1<<j) && vec[i]<(1<<(j+1))) cnt++;
            }
            ans+=cnt*(cnt-1)/2;
        }
        cout<<ans<<endline;

    }
    return 0;
}