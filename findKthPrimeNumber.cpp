#include<bits/stdc++.h>
#define ll long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
vector<bool>is_prime(90000001,true);
vector<ll>prime_num;
void prime(){
    for(ll i=2;i*i<=90000001;i++){
        if(is_prime[i]==true){
            for(ll j=i*i;j<=90000001;j+=i){
                is_prime[j]=false;
            }
        }
    }
    for(ll i=2;i<=90000001;i++){
        if(is_prime[i]) prime_num.push_back(i);
    }
}
int main(){
    fast_cin();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif               
    int t;cin>>t;
    prime();
    
    while(t--){
        ll n;cin>>n;
        cout<<prime_num[n-1]<<endline;
    }
    return 0;
}