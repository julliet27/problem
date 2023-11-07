#include<bits/stdc++.h>
#define ll long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
const int mx=1e5+1;
ll input[mx];
ll arr[mx];
ll nc4(ll num){
    if(num<4) return 0;
    return (num*(num-1)*(num-2)*(num-3))/24;
}         
int main(){
    fast_cin();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif      
    int t;cin>>t;
    for(int i=1;i<=t;i++){
        ll n;cin>>n;
        memset(input,0,mx);
        memset(arr,0,mx);
        for(ll j=0;j<n;j++){
            ll a;cin>>a;
            input[a]++;
        }
        for(ll m=1;m<=mx;m++){
            for(ll j=m;j<=mx;j+=m){
                arr[m]+=input[j];
            }
            ll num=arr[m];
            arr[m]=nc4(arr[m]);
        }
        for(ll m=mx;m>=1;m--){
            for(ll j=2*m;j<=mx;j+=m){
                arr[m]-=arr[j];
            }
        }
        cout<<"Case "<<i<<": "<<arr[1]<<endline;

    }
    return 0;
}