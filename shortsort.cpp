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
        int cnt=0;
        string tmp;cin>>tmp;
        if (tmp[0]=='a') cnt++;
        if (tmp[1]=='b') cnt++;
        if (tmp[2]=='c') cnt++;
        if(cnt==0) cout<<"NO"<<endline;
        else cout<<"YES"<<endline;

    }
    return 0;
}