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
        int n;cin>>n;
        int input[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>input[i][j];
            }
        }
        cout<<solve(n,input)<<endline;
    }
    return 0;
}