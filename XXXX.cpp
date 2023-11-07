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
        int n,x;cin>>n>>x;
        int sum=0,left=-1,right=0;
        for(int i=0;i<n;i++){ 
            int num;cin>>num;
            if(num%x){
                if(left==-1) left=i;right=i;
            }
            sum+=num;
        }
        if(sum%x) cout<<n<<endline;
        else if(left==-1) cout<<-1<<endline;
        else cout<<(n-min(left+1,n-right))<<endline;
           
    }
    
    return 0;
}