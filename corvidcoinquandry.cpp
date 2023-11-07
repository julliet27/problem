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
        int C,s1,w1,s2,w2,s3,w3;
        cin>>C>>s1>>w1>>s2>>w2>>s3>>w3;
        vector<int>s{s1,s2,s3};
        vector<int>w{w1,w2,w3};
        int mx=-1;
        for(int i=1;i<8;i++){
            int idx=0;
            int num=i;
            int sum=0,sum_S=0;
            while(num>0){
                if(num&1){
                    sum+=w[idx];
                    sum_S+=s[idx];
                }
                if(sum<=C) mx=max(mx,sum_S);
                idx++;
                num=num/2;
            }
        }
        cout<<mx<<endline;
    }
    return 0;
}