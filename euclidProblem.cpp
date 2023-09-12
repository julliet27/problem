#include<bits/stdc++.h>
#define ll long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
ll egcd(ll a,ll b,ll &x, ll &y){
    if(b==0){
      
        x=1;
        y=0;
        
        return a;
    }
    
    ll x1,y1;
    ll d=egcd(b,a%b,x1,y1);
    
    x=y1;
    y=x1-y1*(a/b);
    return d;
}
int main(){
    fast_cin();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ll a,b;
    while(cin>>a>>b){
        ll x,y;
        ll d=egcd(a,b,x,y);
        cout<<x<<" "<<y<<" "<<d<<endline;
    }
    return 0;
}