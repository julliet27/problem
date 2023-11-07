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
    int t; cin>>t;
    int prev=-1;
    ll ans=0;
    for(int i=0;i<t;i++){
        int a;cin>>a;
        if(a==1){
            if(prev==-1) ans=1;
            else{
                ans*= (i-prev);
            }
            prev=i;
        }
    }
    cout<<ans<<endline;
    return 0;
}