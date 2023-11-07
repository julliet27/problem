#include<bits/stdc++.h>
#define ll long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
vector<ll>fact(2e6+11,0);
ll modInverse(ll num, ll mod1){
    ll res=1;
    if(num==1) return 1;
    while(mod1>0){
        if(mod1 & 1){
            res=(res*num)%mod;
            res=res%mod;
        }
        num=(num*num)%mod;
        mod1/=2;
    }
    return res;
}
ll starAndBars(ll n,ll k){
    ll num=n+k-1;
    k--;
    if(k==0) return 1;;
    ll ans=(fact[num]*modInverse((fact[k]*fact[num-k])%mod,mod-2))%mod;
    return ans;
}
int main(){
    fast_cin();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    fact[0]=1;
    for(int i=1;i<=2e6+10;i++){
        fact[i]=(fact[i-1]*i)%mod;
    }               
    int t;cin>>t;
    for(int i=1;i<=t;i++){
        ll n,k;cin>>n>>k;
        cout<<"Case "<<i<<": "<<starAndBars(n,k)<<endline;
    }
    return 0;
}