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
    int t;cin>>t;
    while(t--){
        int n,m;cin>>n>>m;
        string s,k;cin>>s>>k;
        int ans=INT_MAX;
        for(int i=0;i<s.size();i++){
            int sum=0;
            int idx=i,len=0;
            while(len<m && idx<s.size()){
                int num_s=s[idx]-'0',num_k=k[len]-'0';
                int mn=min(num_s,num_k),mx=max(num_s,num_k);
                sum+=min(mx-mn,10+mn-mx);
                len++;
                idx++;
            }
            if(len==m) ans=min(sum,ans);
        }
        cout<<ans<<endline;

    }
    return 0;
}