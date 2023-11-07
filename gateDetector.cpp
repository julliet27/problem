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
        for(int i=0;i<5;i++){
            for(int j=0;j<5;j++){
                char num;cin>>num;
                if(num=='0') cnt++;
            }
        }
        if(cnt==2) cout<<"AND"<<endline;
        if(cnt==9) cout<<"OR"<<endline;
        if(cnt==8) cout<<"NOT"<<endline;
        if(cnt==14) cout<<"XOR"<<endline;
    }
    return 0;
}