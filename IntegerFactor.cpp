#include<bits/stdc++.h>
#define ll unsigned long long 
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
void solve(ll n){
    ll count=0;
    while(n%2==0){
        count++;
        n>>=1;
    }
    if(count>0) cout<<2<<"^"<<count<<" ";
    for(ll i=3;i*i<=n;i=i+2){
        count=0;
        while(n%i==0){
            count++;
            n=n/i;
        }
        if(count>0) cout<<i<<"^"<<count<<" ";
    }
    if(n>2) cout<<n<<"^"<<1<<" ";
}
int main(){
    fast_cin();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif               
    ll t;
    while(cin>>t && t!=0){
        solve(t);
        cout<<endline;
    }
    return 0;
}