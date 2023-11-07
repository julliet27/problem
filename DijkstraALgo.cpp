#include<bits/stdc++.h>
#define ll long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
int start=1 , dest=4;
vector<pair<int,int>>adjacent[8];
void Dijkstra(int distance[],int previous[]){
    int visited[8];
    for(int i=0;i<8;i++){
        distance[i]=INT_MAX;
        previous[i]=-1;
        visited[i]=0;
    }
    priority_queue<int,vector<int>,greater<int>>pq;
    pq.push(start);
    visited[start]=1;
    distance[start]=0;

    while(!pq.empty()){
        int node =pq.top();
        pq.pop();
        visited[node]=1;
        for(int i=0;i<adjacent[node].size();i++){
            int neighbor=adjacent[node][i].second;
            int cost=adjacent[node][i].first;
            if(visited[neighbor]==0){
                visited[neighbor]==1;
                pq.push(neighbor);
            }
            if(distance[node]+cost<distance[neighbor]){
                distance[neighbor]=distance[node]+cost;
                previous[neighbor]=node;
            }
        }

    }

}

void printShortestPath(){
    int distance[8],previous[8];
    Dijkstra(distance, previous);
    vector<int>path;
    int road=dest;
    path.push_back(road);
    while(previous[road]!=-1){
        path.push_back(previous[road]);
        road=previous[road];
    }
    cout<<"min distance "<<distance[dest]<<endline;
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
        int a,b,c;cin>>a>>b>>c;
        adjacent[a].push_back(make_pair(c,b));
        adjacent[b].push_back(make_pair(c,a));
    }
    printShortestPath();
    return 0;
}