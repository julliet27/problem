#include <bits/stdc++.h>
#define endline "\n"
#define fast_io ios_base::sync_with_stdio(false)
#define ll long long
using namespace std;
int main()
{
    fast_io;
    int t;cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        unordered_map<ll,ll>mp;
        ll res=0,sum=0;
        mp[0]=1;
        for(int i=0;i<s.size();i++){
            sum+=(int)s[i]-(int)'0';
            ll tmp=sum-i-1;
            mp[tmp]++;
            res+=mp[tmp]-1;
        }
        cout<<res<<endline;
        
    }
    return 0;
}