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
        double ans=1;
        for(int i=0;i<n;i++){
            int a;cin>>a;
            ans*=pow(a,1.0*1/n);
        }
        //cout<<round(ans)<<" "<<ans<<endline;
        if(abs(round(ans)-ans)<1e-5) cout<<"Yes"<<endline;
        else cout<<"No"<<endline;

    }
    return 0;
}