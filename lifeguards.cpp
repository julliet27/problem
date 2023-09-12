#include<bits/stdc++.h>
#define ll long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
bool interval(pair<ll,ll> & i1,pair<ll,ll> & i2){
    return i1.second<i2.second;
}
int main(){
    fast_cin();
    #ifndef ONLINE_JUDGE
    // freopen("lifeguards.in", "r", stdin);
    // freopen("lifeguards.out", "w", stdout);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif               
    ll t;cin>>t;
    vector<pair<ll,ll>>vec;
    while(t--){
        ll a,b;cin>>a>>b;
        vec.push_back(make_pair(a,b));
    }
    sort(vec.begin(),vec.end(),interval);
    ll prev_in=vec[0].first,prev_out=vec[0].second;
    ll sum=0;
    for(auto i:vec){
        cout<<i.first<<" "<<i.second<<endline;
    }
    // for(ll i=1;i<vec.size();i++){
    //     if(vec[i].first<prev_out){
    //         sum+=(vec[i].second-prev_in);
    //     }
    // }
    return 0;
}