#include<bits/stdc++.h>
#define ll long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
int permutation(ll n,ll div){
    ll cnt=0;
    while(n>0){
        cnt+= (n/div);
        n=n/div;
    }
    return cnt;
}
int power(ll n,ll div){
    ll cnt=0;
    while(n%div==0){
        cnt++;
        n=n/div;
    }
    return cnt;
}
int main(){
    fast_cin();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif               
    int t;cin>>t;
    for(int i=1;i<=t;i++){
        int n,r,p,q;cin>>n>>r>>p>>q;
        int a=permutation(n,2);
        int b=permutation(n,5);
        int c=permutation(r,2);
        int d=permutation(r,5);
        int e=permutation(n-r,2);
        int f=permutation(n-r,5);
        int g=power(p,2);
        int h=power(p,5);
        ll ans=min(a-c-e+(g*q),b-d-f+(h*q));
        cout<<"Case "<<i<<": "<<ans<<endline;
        
    }
    return 0;
}