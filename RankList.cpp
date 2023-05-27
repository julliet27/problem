#include<bits/stdc++.h>
#define endline "\n"
#define fast_io ios_base::sync_with_stdio(false)
#define ll long long
using namespace std;
bool comp(pair<int,int>&left,pair<int,int>&right){
    return left.first>right.first || (left.first==right.first && left.second<right.second);
}
int main(){
    fast_io;
    int n,k;cin>>n>>k;
    vector<pair<int,int>>vec;
    for(int i=0;i<n;i++){
        int p,t;cin>>p>>t;
        vec.push_back(make_pair(p,t));
    }
    sort(vec.begin(),vec.end(),comp);
    map<pair<int,int>,int>mp;
    for(auto i:vec) mp[i]++;
    cout<<mp[vec[k-1]]<<endline;
    return 0;
}