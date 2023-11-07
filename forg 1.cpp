#include<bits/stdc++.h>
#define ll long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
const int mx=1e5+10;
int input[mx],memo[mx];
int min_cost(int idx,int cost,int n){
	if(idx==n) return 0;
	if(idx+1==n) return 0;
	if(memo[n]>0) return memo[n];
	memo[n]=min(cost+)
}
int main(){
    fast_cin();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
    int n; cin>>n;
    int cost=0,idx=0;
	for(int i=1;i<=n;i++){cin>>input[i];}
	min_cost(idx,cost,n);
    return 0;
}