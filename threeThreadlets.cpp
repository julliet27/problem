#include<bits/stdc++.h>
#define ll long long int
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
        int a,b,c;cin>>a>>b>>c;
        int mn1=min({a,b,c});
        int div_a=0,div_b=0,div_c=0;
        bool flag=false;
        if(a%mn1==0) div_a=a/mn1-1;
        else flag=true;
        if(b%mn1==0) div_b=b/mn1-1;
        else flag=true;
        if(c%mn1==0) div_c=c/mn1-1;
        else flag=true;
        if(flag) cout<<"NO"<<endline;
        else{
            if(div_a+div_b+div_c<=3) cout<<"YES"<<endline;
            else cout<<"NO"<<endline;
        }
        
    }
    return 0;
}