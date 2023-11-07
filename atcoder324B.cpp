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
    ll n;cin>>n;
    while(n%2==0){
        n=n/2;
    }
    while(n%3==0){
        n=n/3;
    }
    if(n<=1) cout<<"Yes"<<endline;
    else cout<<"No"<<endline;
    return 0;
}