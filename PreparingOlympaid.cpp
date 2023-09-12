#include <bits/stdc++.h>
#define endline "\n"
#define fast_io ios_base::sync_with_stdio(false)
#define ll long long
using namespace std;
int main()
{
    fast_io;
    int n,l,r,x; cin>>n>>l>>r>>x;
    vector<int>vec(n,0);
    int cnt=0;
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    sort(vec.begin(),vec.end());
    for(int i=0;i<((1<<n));i++){
        int tmp=i,index=0,sum=0;
        vector<int>tmp_vec;
        int mx=-1,mn=1e6+1;
        while(tmp>0){
            if(tmp&1) {
                sum+=vec[index];
                tmp_vec.push_back(vec[index]);
                mx=max(vec[index],mx);
                mn=min(vec[index],mn);
            }
            tmp=tmp>>1;
            index++;
        }
        if((mx-mn>=x) && (l<= sum && sum<=r)) cnt++;
    }
    cout<<cnt<<endline;
    return 0;
}