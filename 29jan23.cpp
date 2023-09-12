#include<bits/stdc++.h>
#define endline "\n"
#define ll long long
#define fast_io ios_base::sync_with_stdio(false), cin.tie(nullptr)
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,s,r;cin>>n>>s>>r;
        vector<int>vec(n,r/(n-1));
        int diff=s-r;
        vec[0]=diff;
        int num=r%(n-1);
        while(num>0){
            for(int i=1;i<n;i++){
                if(vec[i]<6 && num!=0){
                    vec[i]++;
                    num--;
                }
            }
        }
        for(int i:vec){
            cout<<i<<" ";
        }
        //cout<<endline;


    }
    return 0;
}
