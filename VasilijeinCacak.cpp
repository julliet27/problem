#include<bits/stdc++.h>
#define ll unsigned long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;

int main(){
    fast_cin();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif     
    int t;cin>>t;
    while(t--){
        ll n,k,x;cin>>n>>k>>x;
        ll min_sum=(k*(k+1));
        ll max_sum=(n*(n+1)-(n-k)*(n-k+1));
        if(min_sum<=2*x && 2*x<=max_sum) cout<<"YES"<<endline;
        else cout<<"NO"<<endline;
    }
    return 0;
}