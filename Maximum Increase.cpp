#include<bits/stdc++.h>
#define endline "\n"
#define ll long long
#define fast_io ios_base::sync_with_stdio(false), cin.tie(nullptr)
using namespace std;
int main(){
    fast_io;
    int t;cin>>t;
    vector<int>vec,tmp(t,1);
    for(int i=0;i<t;i++){
        int a;cin>>a;
        vec.push_back(a);
    }
    for(int i=1;i<t;i++){
        if(vec[i-1]<vec[i]){
            tmp[i]=1+tmp[i-1];
        }
    }
    int ans=*max_element(tmp.begin(),tmp.end());
    cout<<ans<<endline;
    return 0;
}

