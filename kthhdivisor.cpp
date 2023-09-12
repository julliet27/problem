#include<bits/stdc++.h>
#define ll long long
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
int main(){
    fast_cin();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ll n,k;cin>>n>>k;
    vector<ll>vec;
    for(ll i=1;i*i<=n;i++){
        if(n%i==0){
            vec.push_back(i);
            if(n/i!=i) vec.push_back(n/i);
        }
    }
    sort(vec.begin(),vec.end());
    if(k<=vec.size())cout<<vec[k-1]<<endline;
    else cout<<-1<<endline;
    return 0;
}