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
        vector<int>vec(n,0);
        for(int j=0;j<n;j++){cin>>vec[j];}
        sort(vec.begin(),vec.end());
        int sum=0;
        for(int i=0;i<n/2;i++){
            sum+=(vec[n-i-1]-vec[i]);
        }
        cout<<sum<<endline;
    }
    return 0;
}