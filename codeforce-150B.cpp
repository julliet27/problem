#include<bits/stdc++.h>
#define ll long long
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

int opposite(ll a,ll b,ll c){
    unordered_map<ll,ll>mp;
    ll diff=abs(a-b);
    ll num=2*abs(a-b)+2;
    if(c>num) return -1;
    if(c+diff==a || c+diff==b) return -1;
    for(ll i=1;i<(num/2);i++){
        if(i+diff<=num){
            mp[i]=i+diff;
            mp[i+diff]=i;
        }
    }
    for(auto i:mp){
        cout<<i.first<<" "<<i.second<<endline;
    }
    if(mp[mp[c]]!=c) return -1;
    return mp[c];
    

}
int main(){
    fast_cin();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n;cin>>n;
    while(n--){
        ll a,b,c;cin>>a>>b>>c;
        cout<<opposite(a,b,c)<<endline;
    }
    return 0;
}