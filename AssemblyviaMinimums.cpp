#include<bits/stdc++.h>
#define ll long long
#define u unsigned
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
int main(){
    fast_cin();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int size=(n*(n-1))/2;
        vector<int>vec(size,0);
        vector<int> ans;
        for(int i=0;i<size;i++)cin>>vec[i];
        sort(vec.begin(),vec.end());
        int mn=1e9,cnt=0,i=0;
        while(i<size){
            while(cnt<n-1){
                mn=min(vec[i],mn);
                i++;
                cnt++;
            }
            ans.push_back(mn);
            mn=1e9;
            n--;
            cnt=0;
        }
        ans.push_back(vec[size-1]);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endline;

    }
    return 0;
}