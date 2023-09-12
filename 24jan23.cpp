#include<bits/stdc++.h>
#define endline "\n"
#define ll long long
#define fast_io ios_base::sync_with_stdio(false), cin.tie(nullptr)
using namespace std;
void solve(){
    int n,ans=0;cin>>n;
    vector<int>vec(100,0);
    for(int i=0;i<n;i++){
        int h;cin>>h;
        vec[h]++;
    }
    for(int i=0;i<vec.size();i++){
        if(vec[i]!=0){
            if(vec[i]==1){
                ans+=1;
            }
            if(vec[i]>1){
                ans+=i;
            }
        }
    }
    cout<<ans<<endline;
}
int main(){
    fast_io;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

