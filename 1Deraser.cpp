#include<bits/stdc++.h>
#define ll long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
const int mx=1e6+10;
vector<int>vec;
int memo[mx][mx];
ll dp(int x,int num){
	if(x==0 && num==0) return 1;
	if(x==0) return 1;
	if(num==0) return 0;
	if(memo[x][num]!=-1) return memo[x][num];
	int ret=0;
	for(int i=0;i<=vec.size();i++){
		ret+=dp(x-vec[i],vec[i])+dp(x,vec[i-1]);
		ret=ret%mod;
	}
	memo[x][num]=ret;
	return memo[x][num];
	
}
int main(){
    fast_cin();
    int n,x;cin>>n>>x;
    vec.push_back(0);
    for(int i=0;i<n;i++){
		int a; cin>>a;
		vec.push_back(a);
    }
    sort(vec.begin(),vec.end());
    return 0;
}