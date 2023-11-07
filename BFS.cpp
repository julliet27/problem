#include<bits/stdc++.h>
#define ll long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
map<int,vector<int>>mp;
int start=1 , dest=7;

bool BFSWithShortestPath(int distance[],int previous[]){
    int visited[8];
    for(int i=0;i<8;i++){
        visited[i]=0;
        distance[i]=INT_MAX;
        previous[i]=-1;
    }
    queue<int>Q;
    Q.push(start);
    visited[start]=1;
    distance[start]=0;
    while(!Q.empty()){
        int node=Q.front();
        Q.pop();
        for(int i=0;i<mp[node].size();i++){
            if(visited[mp[node][i]]==0){
                visited[mp[node][i]]=1;
                distance[mp[node][i]]=distance[node]+1;
                previous[mp[node][i]]=node;
                Q.push(mp[node][i]);
                if(mp[node][i]== dest ){return true;}
            }
        }
    }
    return false;
}

void printShortestPath(){
    int distance[8],previous[8];
    if(!BFSWithShortestPath(distance,previous)){
        cout<<"There is no path";
        return;
    }
    vector<int>path;
    int road=dest;
    path.push_back(road);
    while(previous[road]!=-1){
        path.push_back(previous[road]);
        road=previous[road];
    }
    cout<<"shortest path:"<<distance[dest]<<endline;
    for(int i=path.size()-1;i>=0;i--){
        cout<<path[i]<<" ";
    }
}

int main(){
    fast_cin();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif               
    int n;cin>>n;
    while(n--){
        int a,b;cin>>a>>b;
        mp[a].push_back(b);
        mp[b].push_back(a);
    }
    printShortestPath();
    return 0;
}