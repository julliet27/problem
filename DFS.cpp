#include<bits/stdc++.h>
#define ll long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
map<int,vector<int>>mp;

void DFS(int visited[],int node){
    if(visited[node]==1) return;
    visited[node]=1;
    for(int i=0;i<mp[node].size();i++){
        DFS(visited,mp[node][i]);
    }
}

int main(){
    fast_cin();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif               
    int n;cin>>n;
    int visited[8];
    while(n--){
        int a,b;cin>>a>>b;
        mp[a].push_back(b);
        mp[b].push_back(a);
    }
    for(int i=0;i<8;i++){
        visited[i]=0;
    }
    DFS(visited,1);
    
    return 0;
}