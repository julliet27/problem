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
        char vec[8][8]={0};
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                cin>>vec[i][j];
            }
        }
        string str="";
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                if (vec[i][j]!='.'){
                    while(vec[i][j]!='.' && i<8 && j<8){
                        str+=vec[i][j];
                        i++;
                    }
                    break;
                }
            }
         }
        cout<<str<<endline;
    }
    return 0;
}