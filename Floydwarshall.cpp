#include<bits/stdc++.h>
#define ll long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;


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