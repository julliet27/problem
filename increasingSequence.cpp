#include<bits/stdc++.h>
#define ll long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
void solve(int num){
    vector<int>input(num+1,0);
    int number=1,cnt=0;
    for(int i=1;i<=num;i++){
        cin>>input[i];
    }
    int idx=1,ans=0;
    while(number<=1e9){
        if(number!=input[idx]){
            idx++;
            cnt++;
            ans=number;
        }
        if(cnt==num) break;
        number++;
    }
   
    cout<<ans<<endline;
}
int main(){
    fast_cin();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif             
    int t;cin>>t;
    for(int i=0;i<t;i++){
        int n;cin>>n;
        solve(n);
    }
    return 0;
}