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
        ll n,k,l;cin>>n>>k>>l;
        vector<ll>vec;
        while(n--){
            int m,a;cin>>m>>a;
            if (a==l) vec.push_back(m);
        }
        if(vec.size()>0){
            sort(vec.rbegin(),vec.rend());
            ll sum=0;
            for(int i=0;i<k;i++){
                sum+=vec[i];
            }
            cout<<sum<<endline;
        }
        else cout<<-1<<endline;
    }
    return 0;
}