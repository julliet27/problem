#include<bits/stdc++.h>
#define ll unsigned long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
vector<bool>is_prime(3*1e6+1,true);
void prime(){
    is_prime[0]=false;
    is_prime[1]=false;
    for(ll i=2;i*i<=3*1e6;i++){
        if(is_prime[i]==true){
            for(ll j=i*i;j<=3*1e6;j+=i){
                is_prime[j]=false;
            }
        }
    }
    
}
ll trail_division(ll num){
    ll sum=0;
    for(ll i=2;i*i<=num;i++){
        if(num%i==0){
            sum=sum+i;
            if(i != num/i){
                sum+=(num/i);
            }
        }
    }
    return sum+1+num;
}
int main(){
    fast_cin();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    prime();
    vector<ll>cnt;
    cnt.push_back(2);
    for(ll i=2;i<=1000;i++){
        ll num=trail_division(i*i);
        if(is_prime[num]){
            cnt.push_back(i*i);
        }
    }
    int t;cin>>t;
    while(t--){
        ll a,b;cin>>a>>b;
        ll cnt_num=0;
        for(ll i=0;i<cnt.size();i++){
            
            if(cnt[i]>=a && cnt[i]<=b){
                cnt_num++;
            }
        }
        cout<<cnt_num<<endline;
    }

    return 0;
}