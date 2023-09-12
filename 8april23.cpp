#include<bits/stdc++.h>
#define endline "\n"
#define ll long long
#define fast_io ios_base::sync_with_stdio(false), cin.tie(nullptr)
using namespace std;
char chess[8][8];
bool ld[15],rd[15],row[8];
int c=0;
void solve(int j){
    if(j==8){
        c++;
        return;
    }
    for(int i=0;i<8;i++){
        if(chess[i][j]=='.' && ld[i+j]==0 && rd[i-j+7]==0 && row[i]==0){
            ld[i+j]=1,rd[i-j+7]=1,row[i]=1;
            solve(j+1);
            ld[i+j]=0,rd[i-j+7]=0,row[i]=0;
        }
    }
}
int main(){
    fast_io;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cin>>chess[i][j];
        }
    }
    solve(0);
    cout<<c<<endline;
    return 0;
}
