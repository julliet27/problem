#include<bits/stdc++.h>
#define ll long long
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
int main(){
    fast_cin();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        vector<ll>vec(n+1,0);
        vector<ll>sum(n+1,0);
        bool flag=false;
        for(ll i=1;i<=n;i++){cin>>vec[i];}
        for(ll i=1;i<=n;i++){
            vec[i]=vec[i-1]+vec[i];
            ll tmp=vec[i]%n;
            if(sum[tmp]==0){
                sum[tmp]=i;
            }
            else{
                cout<<i-sum[tmp]<<endline;
                for(ll j=sum[tmp]+1;j<=i;j++){
                    cout<<j<<" ";
                }
                cout<<endline;
                flag=true;
                break;
            }
        }
        if(!flag){
            cout<<sum[0]<<endline;
            for(ll i=1;i<=sum[0];i++){
                cout<<i<<" ";
            }
        }
        
    }
    return 0;
}