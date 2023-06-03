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
        int n;cin>>n;
        vector<int>vec(n,0);
        int cnt=0;
        for(int i=0;i<n;i++) cin>>vec[i];
        int a=0,b=0;
        for(int i=0;i<n;i++){
            if(vec[i]%2!=i%2){
                if(i%2==0) a++;
                else b++;
            }
        }
        if(a!=b)cout<<-1<<endline;
        else cout<<a<<endline;
    }
    return 0;
}