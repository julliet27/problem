#include<bits/stdc++.h>
#define ll long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
unordered_map<ll,ll>mp;
void trail_division(ll num){
    for(ll i=2;i*i<=num;i++){
        while(num%i==0){
            mp[i]++;
            num/=i;
        }
        
    }
    if(num>1) mp[num]++;
}
int main(){
    fast_cin();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif        
    ll A,B;cin>>A>>B;
    ll num=__gcd(A,B);
    trail_division(num);
    cout<<mp.size()+1<<endline;
    return 0;
}