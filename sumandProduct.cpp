#include<bits/stdc++.h>
#define ll long long
#define u int
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
        map<ll,ll>cnt;
        for(int i=0;i<n;i++){
            int a;cin>>a;
            cnt[a]++;
        }
        ll q;cin>>q;
        for(int i=0;i<q;i++){
            ll a,b;cin>>a>>b;
            ll d=1ll*a*a-4ll*b;
            if(d<0){
                cout<<0<<" ";
                continue;
            }
            ll x1=(a-sqrt(d))/2ll;
            ll x2=(a+sqrt(d))/2ll;
            if(x1+x2!=a || x1*x2!=b){
                cout<<0<<" ";
                continue;
            }
            if(x1==x2) cout<< (cnt[x1]*(cnt[x1]-1))/2ll<<" ";
            else cout<< cnt[x1]*cnt[x2]<<" ";
        
        }
        cout<<endline;
    }
    return 0;
}