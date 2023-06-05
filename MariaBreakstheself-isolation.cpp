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
        for(int i=0;i<n;i++) cin>>vec[i];
        sort(vec.rbegin(),vec.rend());
        int cnt=n;
        for(int i=0;i<n;i++){
            if(vec[i]>cnt) cnt--;
        }
        cout<<cnt+1<<endline;
    }
    return 0;
}