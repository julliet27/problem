#include<bits/stdc++.h>
#define ll long long
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
vector<ll>fact(1e6+6);
int modInverse(ll num,ll pow){
    ll res=1;
    if(pow==1) return num;
    if(pow==0) return 1;
    while(pow){
        if(pow%2){
            res=(res*num)%mod;
        }
        num=(num*num)%mod;
        pow/=2;
    }
    return res%mod;
}
void factorial(){
    fact[0]=1;
    for(int i=1;i<=1e6;i++){
        fact[i]=(fact[i-1]*i)%mod;
    }
}
int main(){
    fast_cin();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;cin>>t;
    factorial();
    while(t--){
        int a,b;cin>>a>>b;
        cout<<(fact[a]*modInverse((fact[b]*fact[a-b])%mod,mod-2))%mod<<endline;
    }
    return 0;
}