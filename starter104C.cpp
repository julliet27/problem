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
        int n,k;cin>>n>>k;
        int sum=0;
        
        for(int i=0;i<n;i++){
            int a;cin>>a;
            sum+=a;
        }
        if(k==0 && sum%n==0) cout<<"YES"<<endline;
        else if(sum<k) cout<<"NO"<<endline;
        else{
            sum=sum-n;
            if(sum%(k+1)<=k)cout<<"YES"<<endline;
            else cout<<"NO"<<endline;
        }

    }
    return 0;
}