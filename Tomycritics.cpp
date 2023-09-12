#include<bits/stdc++.h>
#define ll long long
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
        int a,b,c;cin>>a>>b>>c;
        if(a+b>=10 || b+c>=10 || c+a>=10){
            cout<<"yes"<<endline;
        }
        else{
            cout<<"no"<<endline;
        }
    }
    return 0;
}