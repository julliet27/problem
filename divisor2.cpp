#include<bits/stdc++.h>
#define ll long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
vector<int>d(1e6+1,0);
vector<int>cnt(1e6+1,0);
vector<int>ans;
void factor(){
    d[1]=1;
    for(int i=1;i*i<=1e6;i++){
        for(int p=i+i ;p<=1e6;p+=i){
            if(i < (p/i)){
                d[p]+=2;
            }
            if( p/i == i ) {
                d[p]++;
            }
        }    
    }
    for(int i=1;i*i<=1e6;i++){
        for(int p=i+i ;p<=1e6;p+=i){
            if(i < (p/i)){
                if(d[p]>3){
                    if(d[p] % d[i]==0) cnt[p]++;
                    if(d[p] % d[p/i]==0) cnt[p]++;
                }
                if( p/i == i ) {
                    if(d[p] % d[i]==0) cnt[p]++;
                }
            }
        }    
    }
    for(int i=1;i<=1e6;i++){
        if(d[i]==cnt[i]) ans.push_back(i);
    }
    for(int i=107;i<ans.size();i+=108){
        cout<<ans[i]<<endline;
    }
    
   
   
    
   

}
int main(){
    fast_cin();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif               
    factor();
    return 0;
}