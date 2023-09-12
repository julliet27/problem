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
    while(t--){
        ll a,b,c;cin>>a>>b>>c;
        ll div=c/a;
        if(a*div+b>c) div--;
        ll ans=a*div+b;
        cout<<a*div+b<<endline;
    }
    return 0;
}