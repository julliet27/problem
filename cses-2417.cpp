#include<bits/stdc++.h>
#define ll long long
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
vector<int>prime_check(1e6+6,0);
vector<int>prime;
void seive(){
    for(int i=2;i*i<=1e6;i++){
        if(prime_check[i]==0){
            for(int j=i*i;j<=1e6;j+=i){
                prime_check[j]=1;
            }
        }
    }
    for(int i=2;i<=1e6;i++){
        if(prime_check[i]==0){
            prime.push_back(i);
        }
    }
}
void factorize(){
    map<int,vector<int>>mp;
    for(int i=2;i<=1e6;i++){
        int index=0;
        if(prime_check[i]==1){
            int num=i;
            while(num>1){
                if(num%prime[index]==0) {
                    mp[i].push_back(prime[index]);
                }
                while(num%prime[index]==0 && num!=0){
                    num/=prime[index];
                }
                index++;
            }
        
        }
    }
}
int main(){
    fast_cin();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    seive();
    factorize();

    int n;cin>>n;
    vector<int>vec(n,0);
    for(int i=0;i<n;i++) cin>>vec[i];

    
    

    return 0;
}