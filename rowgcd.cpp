#include<bits/stdc++.h>
#define ll unsigned long long int
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
    ll n,m;cin>>n>>m;
    vector<ll>a(n,0);
    vector<ll>b(m,0);
    for(ll i=0;i<n;i++) cin>>a[i];
    for(ll i=0;i<m;i++) cin>>b[i];
    if(n==1 && m==1) cout<<a[0]+b[0]<<endline;
    else{
        ll common=0;
        for(ll i=1;i<n;i++){
            ll tmp=0;
            if(a[i]>a[0]) tmp=a[i]-a[0];
            else tmp=a[0]-a[i];
            common=__gcd(common,tmp);
        }
        for(ll i=0;i<m;i++){
            ll tmp=__gcd(common,b[i]+a[0]);
            cout<<tmp<<" ";
        }
        cout<<endline;
    }
    return 0;
}