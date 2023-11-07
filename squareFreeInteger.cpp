#include<bits/stdc++.h>
#define ll unsigned long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
const ll mx=1e7+1;
vector<ll>mob(mx,1);
vector<ll>is_prime(mx,1);
void mobius(){
    for(ll i=2;i<mx;i++){
        if(is_prime[i]){
            mob[i]=-1;
            for(ll j=i+i;j<mx;j+=i){
                is_prime[j]=0;
                if(j%(i*i)==0) mob[j]=0;
                else mob[j]*=-1;
            }
        }
    }
}
void solve(ll num){
    ll sum=0;
    for(ll i=2;i*i<=num;i++){
       sum-=(mob[i]*(num/(i*i)));
    }
    cout<<num-sum<<endline;
}
int main(){
    fast_cin();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif   
    mobius();
    int t;cin>>t;
    for(int i=0;i<t;i++){
        ll num;cin>>num;
        solve(num);
    }
    return 0;
}
//100000000000000