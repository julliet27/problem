#include<bits/stdc++.h>
#define ll long long int
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
    int n,k;cin>>n>>k;
    vector<ll>vec(n,0);
    map<ll,ll>mp;
    for(ll i=0;i<n;i++) cin>>vec[i];
    ll c=0;
    for(int i=0;i<k;i++){
        mp[vec[i]]++;
        if(mp[vec[i]]==1) c++;
    }
    ll mx=c;
    for(ll i=k;i<n;i++){
        mp[vec[i-k]]--;
        if(mp[vec[i-k]]==0) c--;
        mp[vec[i]]++;
        if(mp[vec[i]]==1) c++;
        mx=max(c,mx);
    }
    cout<<mx<<endline;
    return 0;
}