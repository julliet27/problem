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
    ll n;cin>>n;
    ll cnt=0;
    ll ans=0;
    for(int i=0;i<n;i++) {
        ll a;cin>>a;
        ans=__gcd(a,ans);}
    for(ll i=1;i*i<=ans;i++){
        if(ans%i==0){
            cnt++;
            if(ans/i!=i) cnt++;
        }
        
    }
    cout<<cnt<<endline;
    return 0;
}