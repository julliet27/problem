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
    int t;cin>>t;
    while(t--){
        ll a,b,c;cin>>a>>b>>c;
        if(a<b) cout<<"Second"<<endline;
        else if(a==b){
            if(c%2==0) cout<<"Second"<<endline;
            else cout<<"First"<<endline;
        }
        else cout<<"First"<<endline;
    }
    return 0;
}