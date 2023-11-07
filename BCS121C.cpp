#include<bits/stdc++.h>
#define ll long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;

int main(){
    fast_cin();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif               
    ll n;cin>>n;
    ll ten=1,nine=1,eight=1;
    while(n){
        ten=(ten*10)%mod;
        nine=(nine*9)%mod;
        eight=(eight*8)%mod;
        n--;
    }
    ll ans=(ten-nine-nine+eight)%mod;
    ans=(ans+mod)%mod;
    cout<<ans<<endline;
    return 0;
}