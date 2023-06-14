#include <bits/stdc++.h>
#define endline "\n"
#define fast_io ios_base::sync_with_stdio(false)
#define ll long long int 
using namespace std;
int input_size(int num){
    int cnt=0;
    while((1<<cnt)<=num){
        cnt++;
    }
    return cnt;
}
int main()
{
    fast_io;
    ll t;cin>>t;
    ll n=(1<<10);
    set<ll>store;
    for(int i=1;i<n;i++){
        ll num_one=0,num_two=0,four=0,seven=0;
        for(int j=0;j<input_size(i);j++){
            if((i&(1<<j))==0){
                num_one+=7*pow(10,j);
                num_two+=4*pow(10,j);
                seven++;
            }
            else{
                num_one+=4*pow(10,j);
                num_two+=7*pow(10,j);
                four++;
            }
        }
        if(seven==four){
            store.insert(num_one);
            store.insert(num_two);
        }
    }
    for(auto i:store){
        if(i>=t){
            cout<<i;
            break;
        }
    }
    return 0;
}