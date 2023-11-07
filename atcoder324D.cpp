#include<bits/stdc++.h>
#define ll long long
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
    int  n;cin>>n;
    string str;cin>>str;
    sort(str.begin(),str.end());
    ll num=pow(10,n);
    int ans=0;
    for(ll i=0;i*i<num;i++){
        string t=to_string(i*i);
        
        t.resize(n,'0'); 
        sort(t.begin(),t.end());
        if(t==str){
            ans++;
            
        }
    }
    cout<<ans<<endline;
    return 0;
}