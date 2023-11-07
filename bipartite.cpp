#include<bits/stdc++.h>
#define ll long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
vector<vector<int>>adjacent(11);
bool isBipartted(){
   
    vector<string>color(11,"white");
    queue<pair<string,int>>Q;
    for(int i=0;i<8;i++){
        if(color[i]=="white"){
            Q.push({"red",i});
            color[i]="red";
            while(!Q.empty()){
                pair<string,int>p;
                p=Q.front();
                string node_color=p.first;
                int node=p.second;
                Q.pop();
                for(int j : adjacent[node]){
                    cout<<node<<" "<<j<<" "<<color[j]<<" "<<node_color<<endline;
                    if(color[j]==node_color) return false;
                    if(color[j]=="white"){
                        if(node_color=="red") color[j]="blue";
                        else color[j]="red";
                        Q.push({color[j],j});
                    }

                }

            }
        }
    }
    return true;
    
}
int main(){
    fast_cin();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif               
    int t;cin>>t;
    for(int i=0;i<9;i++){
        int a,b;cin>>a>>b;
        adjacent[a].push_back(b);
    }
    if(isBipartted()) cout<<"YES it is Bipartted;"<<endline;
    else cout<<"No it is not Bipartted;"<<endline;

    return 0;
}