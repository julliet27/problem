#include<bits/stdc++.h>
#define endline "\n"
#define fast_io ios_base::sync_with_stdio(false)
#define ll long long
using namespace std;
int division(int num){
    int cnt=0;
    for(int i=1;i<=num;i++){
        if(num%i==0) cnt++;
    }
    return cnt;
}
bool comp(int a,int b){
    int div_a=division(a);
    int div_b=division(b);
    if(div_a!=div_b) return div_a<div_b;
    else if(a==1) return 1;
    else if(b==1) return 0;
    return a>b;
}
int main(){
    fast_io;
    vector<int>data(1000,0);
    for(int i=1;i<=1000;i++) data[i-1]=i;
    sort(data.begin(),data.end(),comp);
    int n;cin>>n;
    int c=1;
    for(int i=0;i<n;i++){
        int num;cin>>num;
        cout<<"Case "<<c<<": "<<data[num-1]<<endline;
        c++;
    }
    return 0;
}