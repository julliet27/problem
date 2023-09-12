#include<bits/stdc++.h>
#define ll long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
int main(){
    fast_cin();
    #ifndef ONLINE_JUDGE
    freopen("haybales.in", "r", stdin);
    freopen("haybales.out", "w", stdout);
    #endif               
    ll n,k;cin>>n>>k;
    vector<ll>vec(n,0);
    for(ll i=0;i<n;i++){
        cin>>vec[i];
    }
    sort(vec.begin(),vec.end());
    while(k--){
        ll a,b;cin>>a>>b;
        ll ans=upper_bound(vec.begin(),vec.end(),b)-lower_bound(vec.begin(),vec.end(),a);
        cout<<ans<<endline;
    }
    return 0;
}