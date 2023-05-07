#include<bits/stdc++.h>
#define endline "\n"
#define ll long long
#define fast_io ios_base::sync_with_stdio(false), cin.tie(nullptr)
using namespace std;
void primefactor(ll prod,unordered_map<int,int>&mp){
    for(int i=2;i*i<=prod;i++){
        while(prod%i==0){
            mp[i]++;
            prod=prod/i;
        }
    }
    if(prod!=1) mp[prod]++;
}
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        unordered_map<int,int>mp;
        int ans=0,cache=0;
        while(n--){
            int a;cin>>a;
            primefactor(a,mp);
        }
        for(auto i:mp){
            ans+=i.second/2;
            cache+=i.second%2;
        }
        ans=ans+cache/3;
        cout<<ans<<endline;



    }
    return 0;
}


