#include<bits/stdc++.h>
#define ll unsigned long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod1=1e9+7;
ll power(ll a,ll b,ll mod){
    ll res=1;
    while(b>0){
        if(b & 1){
            res=(res*a)%mod;
            res=res%mod;
        }
        a=(a*a)%mod;
        b/=2;
    }
    return res%mod;
}
int main(){
    fast_cin();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif               
    ll a,b,c;
    while(cin>>a>>b>>c){
        a=a%mod1;
        if(a==-1 || b==-1 || c==-1) break;
        if(c==0){
            cout<<a<<endline;
            continue;
        }
        if(b==0){
            cout<<1<<endline;
            continue;
        }
        if(a==0){
            cout<<a<<endline;
            continue;
        }
        ll tmp=power(b,c,mod1-1);
        ll ans=power(a,tmp,mod1) % mod1;
        cout<<ans<<endline;
    }
    return 0;
}