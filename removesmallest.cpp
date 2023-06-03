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
        set<int>s;
        for(int i=0;i<n;i++){
            int tmp;cin>>tmp;
            s.insert(tmp);
        }
        if(s.size()==1) cout<<"YES"<<endline;
        else{
            bool flag=false;
            vector<int>vec(s.begin(),s.end());
            vector<int>prefix(s.size(),0);
            for(int i=1;i<vec.size();i++) prefix[i]=vec[i]-vec[i-1];
            for(int i:prefix){
                if(i>=2){
                    flag=true;
                    break;
                }
            }
            if(flag) cout<<"NO"<<endline;
            else cout<<"YES"<<endline;

        }
    }
    return 0;
}