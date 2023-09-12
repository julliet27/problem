#include<bits/stdc++.h>
#define ll unsigned long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
vector<ll>vec(1e7+1,1);
void trail_division(ll num){
    vector<ll>tmp(num+1,0);
    for(ll i=1;i<=num;i++) tmp[i]=i;
    for(ll i=2;i<=num;i++){
        for(ll p=i;p<=num;p+=i){
            ll cnt=0;
            while(tmp[p] % i==0){
                cnt++;
                tmp[p]=tmp[p]/i;
            }
            vec[p]=vec[p]*(cnt+1);
        }
    }
    
}
int main(){
    fast_cin();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif    
    ll n;cin>>n;
    ll sum=0;
    trail_division(n); 
    for(ll i=1;i<=n;i++){
        sum+= (1ll*vec[i]*i);
    }
    cout<<sum<<endline;
    return 0;
}