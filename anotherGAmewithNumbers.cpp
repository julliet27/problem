#include<bits/stdc++.h>
#define ll long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
ll lcm(vector<ll>& tmp, ll n){
    ll ans=tmp[0];
    for(ll i=1;i<n;i++){
        ans=(tmp[i]*ans)/(__gcd(tmp[i],ans));
    }
    return ans;
}
void solve(ll n,ll m, vector<ll>&input){
    ll sum=0;
    for(ll i=1;i<(1<<m);i++){
        ll num=i,idx=0;
        vector<ll>tmp;
        while(num>0){
            if(num&1) tmp.push_back(input[idx]);
            idx++;
            num>>=1;
        }
        ll len=tmp.size();
        ll common=lcm(tmp,len);
        if(len&1) sum+=(n/common);
        else sum-=(n/common);  
    }
    cout<<n-sum<<endline;
}
int main(){
    fast_cin();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif               
    ll n,m;
    while(cin>>n>>m){
        vector<ll>input(m,0);
        for(int i=0;i<m;i++) cin>>input[i];
        solve(n,m,input);
    }
    return 0;
}