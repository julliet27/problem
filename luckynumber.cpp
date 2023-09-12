#include<bits/stdc++.h>
#define ll long long int
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
vector<int>vec(1e5+1,0);
int main(){
    fast_cin();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int index=1;           
    for(int i=0;i<=1e5;i++){
        if(index%7==0){
            index++;
        }
        if(index%3==0){
            index++;
        }
        vec[i]=2*index-1;
        index++;
    }
    for(int i:vec){
        cout<<i<<endline;
    }
    return 0;
}