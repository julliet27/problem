#include<bits/stdc++.h>
#define ll long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
vector<bool>is_prime(1000001,true);
void prime(){
    is_prime[0]=false;
    is_prime[1]=false;
    for(ll i=2;i*i<=1000001;i++){
        if(is_prime[i]==true){
            for(ll j=i*i;j<=1000001;j+=i){
                is_prime[j]=false;
            }
        }
    }
}
int main(){
    fast_cin();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ll t;cin>>t;
    prime();
    while(t--){
        ll n;cin>>n;
        double x=sqrt(n);
        bool flag=false;
        if(x==int(x) && int(x)<=1000001){
            flag=true;
            if(is_prime[int(x)]==true) cout<<"YES"<<endline;
            else cout<<"NO"<<endline;
        }
        if(!flag) cout<<"NO"<<endline;

    }             
   

    return 0;
}