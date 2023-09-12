#include<bits/stdc++.h>
#define ll long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
void solve(ll mx){
    ll cnt=0;
    for(ll i=1;i<mx;i++){
        for(ll j=i+1;j<=mx;j++){
            cnt+=(__gcd(i,j));
            cout<<__gcd(i,j)<<" ";
        }
        cout<<endline;
    }
    cout<<cnt<<endline;
}
int main(){
    fast_cin();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif               
    ll n;
    while(cin>>n && n!=0){
        solve(n);
    }
    return 0;
}