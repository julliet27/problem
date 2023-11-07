#include<bits/stdc++.h>
#define ll long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;
int main(){
    fast_cin();
    int n,k;cin>>n>>k;
    vector<int>vec(n,0),cnt(k,0);
    set<int>s;
    int mx=-1;
    for(int i=0;i<n;i++){ cin>>vec[i]; }
    for(int right=0,left=0;right<n;right++){
        cnt[vec[right]]++;
        s.insert(vec[right]);
        if(s.size()==k){
            int sum=accumulate(cnt.begin(),cnt.end(),0);
            int mn=*min_element(cnt.begin(),cnt.end());
            if(sum%mn==0){
                mx=max(right-left,mx);
            }
            left++;
            if(left<n)cnt[vec[left]]--;

        }
    }
    cout<<mx<<endline;
    return 0;
}
