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
        int n,m;cin>>n>>m;
        string x,s;cin>>x>>s;
        int cnt=0;
        string tmp=x;
        while(tmp.find(s)==string::npos && tmp.size()<=25){
            cnt++;
            tmp+=tmp;
        }
        if(tmp.find(s)==string::npos) cout<<-1<<endline;
        else cout<<cnt<<endline;

    }
    return 0;
}