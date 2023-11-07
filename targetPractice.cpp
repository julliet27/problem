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
    int arr[10][10]={
                     {1,1,1,1,1,1,1,1,1,1},
                     {1,2,2,2,2,2,2,2,2,1},
                     {1,2,3,3,3,3,3,3,2,1},
                     {1,2,3,4,4,4,4,3,2,1},
                     {1,2,3,4,5,5,4,3,2,1},
                     {1,2,3,4,5,5,4,3,2,1},
                     {1,2,3,4,4,4,4,3,2,1},
                     {1,2,3,3,3,3,3,3,2,1},
                     {1,2,2,2,2,2,2,2,2,1},
                     {1,1,1,1,1,1,1,1,1,1}
                     };
    
    int t;cin>>t;
    while(t--){
        int sum=0;
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
               char a;cin>>a;
               if(a=='X'){
                    sum+=arr[i][j];
               }
            }
        }
        cout<<sum<<endline;

    }
    return 0;
}