#include<bits/stdc++.h>
#define ll long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
bool solve(ll n,ll m){
    vector<ll>check(n+1,0);
    for(ll i=0;i<m;i++){
        ll a,b;cin>>a>>b;
        check[b]+=1;
    }
    for(ll i=1;i<=n;i++){
        if(check[i]>1) return false;
    }
    return false;
}
int main(){
    fast_cin();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif               
    int n;cin>>n;
    for(int i=1;i<=n;i++){
        ll n,m;cin>>n>>m;
        cout<<"Scenario #"<<i<<":"<<endline;
        if(solve(n,m)){
            cout<<"No suspicious bugs found!"<<endline;
        }
        else cout<<"Suspicious bugs found!"<<endline;
    }
    return 0;
}