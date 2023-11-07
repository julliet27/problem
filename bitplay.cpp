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
        vector<int>vec(n,0);
        for(int i=0;i<n;i++){
            char a;cin>>a;
            vec[i]=a-'0';
        }
        int cnt=0;
        for(int i=2;i<n;i+=2){
            int flag=0;
            if(vec[i-2]==1 && vec[i-1]==1){cnt++;flag++;}
            else{
                if(vec[i-2]|vec[i-1]==vec[i] && vec[i-2]^vec[i-1]==vec[i]){ cnt+=2;flag++;}
            }
            if(vec[i-2]&vec[i-1]==vec[i]) {cnt++;flag++;}
            if(flag==0) break;
        }
        cout<<cnt<<endline;
    }
    
    return 0;
}