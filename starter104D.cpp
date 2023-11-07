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
        int x,y,k;cin>>x>>y>>k;
         if( x==y) cout<<x+y<<endline;
         else{
            while(k>0 && x!=y ){
                int a=x;
                x=max(x,y);
                y=min(a,y);
                x=__gcd(x,y);
                y=(x*y)/x;
                k--;
            }
            cout<<x+y<<endline;
         }
    }
    return 0;
}