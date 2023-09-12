#include<bits/stdc++.h>
#define ll long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
void trail_division(ll num){
    vector<ll>vec{1,num};
    for(ll i=2;i*i<=num;i++){
        if(num%i==0){
            vec.push_back(i);
            if(num/i != i) vec.push_back(num/i);
        }
    }
    sort(vec.begin(),vec.end());
    for(ll i=0;i<vec.size();i++){
        cout<<vec
    }
}
int main(){
    fast_cin();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif               
    ll n;cin>>n;
    trail_division(n);
    return 0;
}