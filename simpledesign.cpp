#include<bits/stdc++.h>
#define ll long long int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
ll sum_num(int num,int k){
	ll sum=0;
	string str=to_string(num);
	for(ll i=0;i<str.size();i++){sum+=str[i]-'0';}
	return sum % k==0;
}
int main(){
    fast_cin();
	int t;cin>>t;
	while(t--){
		ll x,k;cin>>x>>k;
		ll cnt=0,ans=x;
		while(!sum_num(ans,k)%k){
				ans++;
		}
		cout<<ans<<endline;
		
	}
    return 0;
}