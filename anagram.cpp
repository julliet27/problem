#include<bits/stdc++.h>
#define endline "\n"
#define fast_io ios_base::sync_with_stdio(false)
#define ll long long
using namespace std;
int main(){
    fast_io;
    int Q,K;cin>>Q>>K;
    map<string,ll>mp;
    for(int i=0;i<Q;i++){
        string S;
        int E;
        cin>>S>>E;
        mp[S]+=E;
    }
    vector<ll>vec(mp.size(),0);
    for(auto i:mp) vec.push_back(i.second);
    sort(vec.rbegin(),vec.rend());
    ll ans=0;
    for(auto i:vec){
        if(K>0){
            ans+=i;
            K--;
        }
    }
    cout<<ans<<endline;

    return 0;
}