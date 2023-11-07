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
    int time=0;
    unordered_map<ll,int>mp;               
    for(int i=0;i<24;i++){
        for(int j=0;j<60;j++){
            for(int k=0;k<60;k++){
                ll num=i*j*k;
                mp[num]=1;
            }
        }
    }

    int t;cin>>t;
    while(t--){
        ll num;cin>>num;
        if(mp[num]==1) cout<<"YES"<<endline;
        else cout<<"NO"<<endline;
    }
    return 0;
}