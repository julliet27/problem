#include<bits/stdc++.h>
#define endline "\n"
#define ll long long
#define fast_io ios_base::sync_with_stdio(false), cin.tie(nullptr)
using namespace std;
int main(){
    fast_io;
    int t;cin>>t;
    while(t--){
        int n,m;cin>>n>>m;
        int left=0,right=0;
        int mx=-1,mn=0;
        set<int>s;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            if(x==-1)left++;
            if(x==-2)right++;
            if(x>0)s.insert(x);
        }
        int sizeS=s.size(),i=0;
        int ans=min(m,sizeS+max(left,right));
        for(auto x:s){
            i++;
            ans=max(ans,sizeS+min(left,x-i)+min(right,m-x-(sizeS-i)));
        }
        cout<<ans<<endline;
    }
    return 0;
}
