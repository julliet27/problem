#include<bits/stdc++.h>
#define ll long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const ll mx=2e6+5;
ll depth[mx];
ll phi[mx];
bool check[mx]={false};
ll arr[mx]={0};
void euler(){
    for(int i=1;i<=2e6;i++){
        phi[i]=i;
    }
    for(int i=2;i<=2e6;i++){
        if(check[i]) continue;
        for(int j=i;j<=2e6;j+=i){
            phi[j]=phi[j]-phi[j]/i;
            check[j]=true;
        }
    }
    depth[2]=1;
    for(int i=3;i<=2e6;i++){
        depth[i]=1+depth[phi[i]];
    }
    arr[1]=0;
    for(int i=2;i<=2e6;i++){
        arr[i]=arr[i-1]+depth[i];
    }
}

int main(){
    fast_cin();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    euler();
    int t;cin>>t;
    while(t--){
        int m,n;cin>>m>>n;
        cout<<arr[n]-arr[m-1]<<endline;
    }
    return 0;
}