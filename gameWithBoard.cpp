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
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        string ans="1";
        int max=0,min=-1;
        for(int i=1;i<vec.size();i++){
            if(vec[i-1]<=vec[i] && max<=vec[i]){
                ans+="1";
                max=vec[i];
            }
            else{
                if(vec[i]<=vec[0]){
                    if(min==-1){
                        ans+="1";
                        min=vec[i];
                    }
                    else{
                        if(min<=vec[i]){
                            ans+="1";
                            min=vec[i];
                        }
                        else ans+="0";
                    }
                }
                else ans+="0";
            }

        }
        cout<<ans<<endline;
    }
    return 0;
}