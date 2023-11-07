#include<bits/stdc++.h>
#define ll long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;

int main(){
    fast_cin();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif               
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        char A[n][n];
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>A[i][j];
            }
        }
        for(int i=0;i<n/2;i++){
			for(int j=0;j<n/2;j++){
                //cout<<i<<":"<<j<<" "<<j<<":"<<n-i-1<<" "<<n-i-1<<":"<<n-j-1<<" "<<n-j-1<<":"<<i<<endline;
				int temp=4*max({A[i][j],A[j][n-i-1],A[n-i-1][n-j-1],A[n-j-1][i]})-
				A[i][j]-A[j][n-i-1]-A[n-i-1][n-j-1]-A[n-j-1][i];
				ans+=temp;
			}
            //cout<<endline;
		}
		cout<<ans<<endl;
        
    }
    return 0;
}