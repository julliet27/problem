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
        int num;cin>>num;
        vector<int>ans(10,0);
        for(int i=1;i<=num;i++){
            string str=to_string(i);
            for(int j=0;j<str.size();j++){
                int idx=str[j]-'0';
                ans[idx]++;
            }
        }
        for(int i=0;i<10;i++){
            if(i==9) cout<<ans[i];
            else{
                cout<<ans[i]<<" ";
            }
        }
        cout<<endline;
    }
    return 0;
}