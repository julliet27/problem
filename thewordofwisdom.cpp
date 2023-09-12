#include<bits/stdc++.h>
#define ll long long
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
int main(){
    fast_cin();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            int a,b;cin>>a>>b;
            if(a<=10) mp[i+1]=b;
        }
        int ans=0,tmp=-1;
        for(auto i:mp){
            if(i.second>tmp){
                tmp=i.second;
                ans=i.first;
            }
        }
        cout<<ans<<endline;
    }
    return 0;
}