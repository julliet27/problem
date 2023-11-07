#include<bits/stdc++.h>
#define ll long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
const int mx=1e6+10;
int memo[mx];
vector<int>input;
int dp(int n){
	if(n==0) return 0;
	int ret=1e9;
	if(memo[n]!=-1) return memo[n];
	for(int c:input){
		if(n-c<0) continue;
		ret=min(ret,dp(n-c));
	}
	ret+=1;
	memo[n]=ret;
	return ret;
}
int main(){
    fast_cin();
    memset(memo,-1,sizeof(memo));
    int n,x;cin>>n>>x;
    for(int i=1;i<=n;i++){
		int s;cin>>s;
		input.push_back(s);
    }
    int ans=dp(x);
    if(ans>=1e9) cout<<-1<<endline;
    else cout<<ans<<endline;
    return 0;
}