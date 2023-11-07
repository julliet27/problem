#include<bits/stdc++.h>
#define ll long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7,nmax=100;

int main(){
    fast_cin();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif               
    int n,m;cin>>n>>m;
    for(int i=0;i<n;i++){
        string str;cin>>str;
        for(int p=0;p<m;p++){
            if(str[p]=='.'){
                if((i+p)&1){
                    cout<<'W';
                }
                else cout<<'B';
            }
            else cout<<'-';
        }
        cout<<endline;
    }
    
    return 0;
}