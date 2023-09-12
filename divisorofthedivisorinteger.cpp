#include<bits/stdc++.h>
#define ll long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e7+7;
vector<bool>is_prime(1e6+1,true);
vector<int>prime;
void seive(){
    for(int i=2;i*i<=1e6;i++){
        if(is_prime[i]){
            for(int j=i*i;j<=1e6;j+=i){
                is_prime[j]=false;
            }
        }
    }
    for(int i=2;i<=1e6;i++){
        if(is_prime[i]) {
            prime.push_back(i);
        }
    }
}


void solve(ll num){
    ll ans=1;
    for(int i=0;i<prime.size();i++){
        if(num<prime[i]){break;}
        ll tmp=num;
        ll s=0;
        while(tmp>1){
            s+=(tmp/prime[i]);
            tmp/=prime[i];
        } 
        // cout<<num<<" "<<prime[i]<<" "<<s<<endline;
        s++;
        ll sum=(s*(s+1)/2)%mod;
        ans*=sum;
        ans=ans%mod;

    }
    cout<<ans<<endline;
}
int main(){
    fast_cin();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif               
    seive();
    ll n;
    while(cin>>n && n!=0){
        solve(n);
    }
    return 0;
}