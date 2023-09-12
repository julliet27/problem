#include<bits/stdc++.h>
#define ll long long
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
int main(){
    fast_cin();
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    int n,c;
    while(cin>>n){
        cin>>c;
        vector<int>vec(c,0); 
        for(int i=0;i<c;i++)cin>>vec[i];
        vector<int>ans_vec;
        ll ans=0;
        ll diff=INT_MAX;
        for(int i=1;i<=(1<<c);i++){
            ll sum=0;
            int tmp=i,index=0;
            vector<int>temp;
            while(tmp>0){
                if(tmp&1){
                    sum+=vec[index];
                    temp.push_back(vec[index]);
                }
                tmp>>=1;
                index++;
            }
            if(sum<=n && (n-sum)<diff){
                diff=n-sum;
                ans=sum;
                ans_vec=temp;
            }
        }
        
        for(int i=0;i<ans_vec.size();i++) cout<<ans_vec[i]<<" ";
        cout<<"sum:"<<ans<<endline;
    }
    return 0;
}