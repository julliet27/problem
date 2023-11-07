#include<bits/stdc++.h>
#define ll long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const ll mod=1000000007;
vector<ll>fact(1e6+5,0);
ll modInverse(ll num, ll mod1){
    ll res=1;
    while(mod1){
        if(mod1 & 1){
            res=(res * num)% mod;
            res=res%mod;
        }
        num=(num*num)%mod;
        mod1/=2;
    }
    return res%mod;
}
int main(){
    fast_cin();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    fact[0]=fact[1]=1;
    for(ll i=2;i<1e6+5;i++){
        fact[i]=((fact[i-1] % mod)*(i%mod))%mod;
    }
    ll t;cin>>t;
    for(ll i=1;i<=t;i++){
        ll n;cin>>n;
        vector<ll>vec(n,0);
        ll sum=0;
        for(ll j=0;j<n;j++){
            cin>>vec[j];
            sum+=vec[j];
        }
        reverse(vec.begin(),vec.end());
        ll ans=1;
        for(ll j=0;j<n;j++){
            ll demo=(fact[sum-vec[j]]*fact[vec[j]-1]) % mod ;
            ll tmp=(fact [sum-1]*modInverse(demo , mod-2 )) %mod;
            ans=(ans * tmp) % mod;
            sum-=vec[j];
        }
        cout<<"Case "<<i<<": "<<ans%mod<<endline;
    }
    
    

    return 0;
}