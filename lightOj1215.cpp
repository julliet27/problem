#include<bits/stdc++.h>
#define ll long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
int main(){
    fast_cin();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif               
    int t;cin>>t;
    for(int i=1;i<=t;i++){
        unsigned ll a,b,l; cin>>a>>b>>l;
        unsigned ll x=(a*b)/__gcd(a,b);
        if(l%x!=0){
            cout<<"Case "<<i<<": "<<"impossible"<<endline;
        }
        else{
            unsigned ll c=l/x;
            unsigned ll g=__gcd(c,x);
            while(g!=1){
                c*=g;
                x/=g;
                g=__gcd(c,x);
            }
            cout<<"Case "<<i<<": "<<c<<endline;
        }
    }
    return 0;
}