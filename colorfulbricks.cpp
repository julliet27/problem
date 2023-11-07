#include<bits/stdc++.h>
#define ll long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
vector<ll>fact(100+1,0);
ll combination(ll n,ll k){
    if(k==1 || k==0) return 1;
    ll ans=fact[n]/(fact[k]*fact[n-k]);
    return ans;
}
int main(){
    fast_cin();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    fact[0]=1;
    for(int i=1;i<=100;i++){
        fact[i]=(fact[i-1]*i)%mod;
    }               
    int t;cin>>t;
    int cnt=0;
    for(int i=0;i<t;i++){
        int a; cin>>a;
        if(a==1) cnt++;
    }
    cout<< combination(t-1,cnt);
    return 0;
}