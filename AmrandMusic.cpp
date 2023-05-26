#include<bits/stdc++.h>
#define endline "\n"
#define fast_io ios_base::sync_with_stdio(false)
#define ll long long
using namespace std;
int main(){
    fast_io;
    int n,k;cin>>n>>k;
    vector<pair<int,int>>vec;
    vector<int>ans;
    for(int i=0;i<n;i++){
        int tmp;cin>>tmp;
        vec.push_back(make_pair(tmp,i+1));
    }
    sort(vec.begin(),vec.end());
    int day=0;
    for(auto i:vec){
        day+=i.first;
        if(day<=k){
            ans.push_back(i.second);
        }
        else break;
    }
    cout<<ans.size()<<endline;
    for(int i:ans)cout<<i<<" ";
    cout<<endline;
    return 0;
}