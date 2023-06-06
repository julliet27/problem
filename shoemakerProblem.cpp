#include <bits/stdc++.h>
#define endline "\n"
#define fast_io ios_base::sync_with_stdio(false)
#define ll long long
using namespace std;
bool comp(vector<ll>&a,vector<ll>&b){
    ll p=a[0]*b[1];
    ll q=a[1]*b[0];
    return p<q;
}
int main()
{
    fast_io;
    int t;cin>>t;
    for(int j=0;j<t;j++){
        int n;cin>>n;
        vector<vector<ll>>vec;
        for(int i=0;i<n;i++){
            int a,b;cin>>a>>b;
            vec.push_back({a,b,i});
        }
        sort(vec.begin(),vec.end(),comp);
        for(int i=0;i<vec.size();i++) {
            cout<<vec[i][2]+1;
            if(i!=n-1)cout<<" ";
        }
        cout<<endline;
        if(j!=(t-1))cout<<endline;
    }
    return 0;
}