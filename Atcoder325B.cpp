#include<bits/stdc++.h>
#define ll long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;

int main(){
    fast_cin();
    
    int n;cin>>n;
    int cnt[24];
    memset(cnt,0,sizeof(cnt));
    while(n--){
		int w,x;cin>>w>>x;
		cnt[x]+=w;
    } 
    int sum=0;
    for(int i=0;i<24;i++){
		int tmp=0;
		for(int j=0;j<9;j++){
			tmp+=cnt[(i+j)%24];
		}
		sum=max(sum,tmp);
    }
		
    cout<<sum<<endline;            
    return 0;
}