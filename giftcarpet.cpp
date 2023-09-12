#include<bits/stdc++.h>
#define ll long long
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
char input[20][20];
char arr[]={'v','i','k','a'};
bool solve(int m,int n){
    int index=0;
    for(int i=0;i<n;i++){
        bool flag=false;
        for(int j=0;j<m;j++){
            if(input[j][i]==arr[index]){
                flag=true;
                continue;
            }
        }
        if(flag){
            if(index==3) return true;
            else index++;
        }
    }
    return false;
}
int main(){
    fast_cin();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;cin>>t;
    while(t--){
        int m,n;cin>>m>>n;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>input[i][j];
            }
        }
        if(solve(m,n)) cout<<"YES"<<endline;
        else cout<<"NO"<<endline;
    }
    return 0;
}