#include<bits/stdc++.h>
#define ll long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
void solve(int num){
    int ans=0;
    if(num>=9) ans=ans+9;
    if(num<9) ans=ans+num;
    

    if(num>=999 ) ans=ans+900;
    if(99<num && num<999) ans=ans+(num-99);

    if(num>=99999) ans=ans+90000;
    if(9999<num && num<99999) ans=ans+(num-9999);
    
    cout<<ans<<endline;
}
int main(){
    fast_cin();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif               
    int num;cin>>num;
    solve(num);
    return 0;
}