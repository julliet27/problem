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
    int t; cin>>t;
    while(t--){
        double a,b;cin>>a>>b;
        if(a==0.0 && b==0.0) cout<<-1<<endline;
        else{
            double sum=max(a,b);
            cout<<setprecision(5)<<fixed<<1/sum<<endline;
        }
    }
    return 0;
}