#include<bits/stdc++.h>
#define ll long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
vector<ll>isPrime(1e9+10,1);
vector<ll>len(1e9+10,0);
void prime_factor(){
    for(ll i=3;i*i<=1e9;i++){
        for(ll p=i;p<=1e9;p+=i){
            len[p]++;
        }
    }
}
int main(){
    fast_cin();
    prime_factor();
    cout<<len[15]<<endline;
    int t;cin>>t;
    while(t--){
        ll n;cin>>n;
        if(len[n]%2==0) cout<<"Bob"<<endline;
        else cout<<"Alice"<<endline;

    }
    return 0;
}

