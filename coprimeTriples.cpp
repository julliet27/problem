#include<bits/stdc++.h>
#define ll unsigned long long int
#define u int 
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
const ll mx=1e6;
ll m[mx+1]={0};
ll arr[mx+1]={0};
ll nC3(ll num){
    if(num<3) return 0;
    return (num*(num-1)*(num-2))/6;
}
int main(){
    fast_cin();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ll n;cin>>n;
    vector<ll>input(n,0);
    for(ll i=0;i<n;i++){
        cin>>input[i];
        m[input[i]]++;
    }
    for(ll i=1;i<=mx;i++){
        for(ll j=i;j<=mx;j+=i){
            arr[i]+=m[j];
        }
        arr[i]=nC3(arr[i]);
    }
    for(ll i=mx;i>=1;i--){
        ll num=arr[i];
        for(ll j=2*i;j<=mx;j+=i){
            arr[i]-=arr[j];
        }
    }
    cout<<arr[1]<<endline;

    return 0;
}