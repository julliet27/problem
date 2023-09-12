#include<bits/stdc++.h>
#define ll long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
vector<bool>is_prime(1e6+1,true);
void prime(){
    is_prime[0]=false;
    is_prime[1]=false;
    for(ll i=2;i*i<=(1e6+1);i++){
        if(is_prime[i]==true){
            for(ll j=i*i;j<=(1e6+1);j+=i){
                is_prime[j]=false;
            }
        }
    }
}
void solve(ll num){
    for(ll i=3;i<num;i++){
        if(is_prime[num-i] && is_prime[i]){
            cout<<num<<" = "<<i<<" + "<<num-i<<endline;
            break;
        }
    }
}
int main(){
    fast_cin();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif               
    ll t;
    prime();
    while(cin>>t && t!=0){
        solve(t);
    }
    return 0;
}