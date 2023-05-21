#include<bits/stdc++.h>
#define endline "\n"
#define fast_io ios_base::sync_with_stdio(false)
using namespace std;
int main(){
    //fast_io;
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>input(n,0);
        vector<int>pos(n,0);
        for(int i=0;i<n;i++) cin>>input[i];
        int k=input[0]-1;
        for(int i=2;i<=n;i++) k=__gcd(k,abs(input[i-1]-i));
        cout<<"ans: "<<k<<endline;
    }
    return 0;
}