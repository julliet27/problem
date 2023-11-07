#include<bits/stdc++.h>
#define ll long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
const int mx=1e6+10;
int memo[mx];
vector<int>vec;
ll dp(int x){
	if(x==0) return 1;
	if(memo[x]!=-1) return memo[x];
	ll ret=0;
	for(ll c:vec){
		if(x-c<0) continue;
		ret+=dp(x-c);
		ret=ret%mod;
	}
	memo[x]=ret;
	return memo[x];
}
int main(){
    fast_cin();
    memset(memo,-1,sizeof(memo));
    ll n,x;cin>>n>>x;
    for(int i=0;i<n;i++){
		int a;cin>>a;vec.push_back(a);
    }
    cout<<dp(x)<<endline;
    return 0;
}