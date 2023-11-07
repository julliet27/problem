#include<bits/stdc++.h>
#define ll long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;

int main(){
    fast_cin();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif               
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int tmp_n=n;
        vector<int>ans{1,3,5};
        n=n-3;
        int prev1=3,prev2=5,num=6;
        for(int i=0;i<n;i++){
            while((3*num)%(prev1+prev2)==0){
                num++;
            }
            ans.push_back(num);
            prev2=prev1;
            prev1=num;
            num++;

        }
        for(int i=0;i<tmp_n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endline;
    }
    return 0;
}