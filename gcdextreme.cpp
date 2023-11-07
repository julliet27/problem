#include<bits/stdc++.h>
#define ll long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mx=1e6+5;
int phi[mx+5]={0};
bool check[mx+5]={false};
ll sum[mx+5]={0};
ll g[mx+5]={0};
void seive(){
    for(int i=1;i<=mx;i++){phi[i]=i;}
    for(int i=2;i<=mx;i++){
        if(check[i]) continue;
        for(int p=i;p<=mx;p+=i){
            phi[p]=phi[p]-phi[p]/i;
            check[p]=true;
        }
    }
    for(int i=1;i<=mx;i++){
        for(int p=i;p<=mx;p+=i){
            if(i!=p){
                sum[p]+=(phi[p/i]*i);
            }
        }
    }
    sum[1]=0;
    g[0]=0;
    for(int i=1;i<=mx;i++){
        g[i]=g[i-1]+sum[i];
    }
    

}

int main(){
    fast_cin();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif               
    seive();
    int n;
    while(cin>>n && n!=0){
        //cout<<g[n]<<endline;
    }
    return 0;
}