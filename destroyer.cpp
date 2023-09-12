#include <bits/stdc++.h>
#define endline "\n"
#define fast_io ios_base::sync_with_stdio(false)
#define ll long long int 
using namespace std;
int main()
{
    fast_io;
    int t;cin>>t;
    for(int i=0;i<t;i++){
        int n;cin>>n;
        vector<int>vec(n+1,0);
        bool flag=false;
        for(int j=1;j<=n;j++){
            cin>>vec[j];
        }
        for(int j=1;j<=n;j++){
            if(vec[j]>0){
                if((vec[j]-vec[j-1])>1) flag=true;
            }
        }
        if(flag) cout<<"NO"<<endline;
        else  cout<<"YES"<<endline;
    }
    return 0;
}