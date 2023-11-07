#include<bits/stdc++.h>
#define ll long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
const int mod=1e9+7;

int main(){
    // fast_cin();
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif               
    string str;cin>>str;
    map<char,int>mp;
    int sum=0,seven=INT_MAX;
    for(int i=0;i<str.size();i++){ mp[str[i]]++; }
    seven=min(mp['T'],mp['G']);
    seven=min(mp['C'],seven);
    for(auto i: mp){ sum+=(i.second*i.second);}
    if(mp.size()==3){
        sum+=(7*seven);
    }
    cout<<sum<<endline;
    return 0;
}