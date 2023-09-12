#include<bits/stdc++.h>
#define ll long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const ll mod=10000007;
ll power(ll a,ll b){
    ll res=1;
    while(b){
        if(b&1) {
            res=(res*a)%mod;
            res=res%mod;
        }
        a=(a*a)%mod;
        b=b/2;

    }
    return res%mod;
}
int main(){
    fast_cin();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ll a,b;
    while(cin>>a>>b){
        ll sum=((2*power(a-1,b))%mod+(2*power(a-1,a-1))+(power(a,b)%mod)+(power(a,a)%mod))%mod;
        if (sum>2) cout<<sum%mod<<endline;
    }
    return 0;
}