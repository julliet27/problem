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
        vector<int>pref(n-1,0);
        for(int i=0;i<n;i++) cin>>vec[i];
        sort(vec.begin(),vec.end());
        for(int i=1;i<n;i++) pref[i-1]=vec[i]-vec[i-1];
        int ans=*min_element(pref.begin(),pref.end());
        cout<<ans<<endline;
    }
    return 0;
}