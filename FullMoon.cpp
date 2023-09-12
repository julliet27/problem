#include<bits/stdc++.h>
#define ll long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

int main(){
    fast_cin();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif               
    int t;cin>>t;
    vector<vector<int>>vec;
    map<vector<int>,int>mp;
    while(t--){
        int a,b,c,d;cin>>a>>b>>c>>d;
        mp[{a,b,c,d}]=(d-c)*(b-a);
        vec.push_back({a,b,c,d});
    }
     

    
    return 0;
}