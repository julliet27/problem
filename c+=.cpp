#include <bits/stdc++.h>
#define endline "\n"
#define fast_io ios_base::sync_with_stdio(false)
#define ll long long
using namespace std;
int main()
{
    fast_io;
    int t;cin>>t;
    while(t--){
        int a,b,n;cin>>a>>b>>n;
        int cnt=0,tmp=0;
        while(tmp<=n){
            tmp=a+b;
            if(a<b) a=tmp;
            else b=tmp;
            cnt++;
        }
        cout<<cnt<<endline;
    }
    return 0;
}