#include<bits/stdc++.h>
#define ll unsigned long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
void solve(ll num){
    vector<ll>vec;
    for(ll i=1;i*i<=num;i++){
        if(num%i==0){
            vec.push_back(i);
            if(num/i!=i){
                vec.push_back(num/i);
            }
        }
    }
    sort(vec.begin(),vec.end());
    for(ll i:vec){
        cout<<i<<endline;
    }
}
int main(){
    fast_cin();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif               
    ll t;cin>>t;
    solve(t);
    return 0;
}