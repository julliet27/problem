#include<bits/stdc++.h>
#define endline "\n"
#define fast_io ios_base::sync_with_stdio(false)
#define ll long long
using namespace std;
double calculation(double x,double y,double d){
    double a=sqrt(x*x-d*d);
    double b=sqrt(y*y-d*d);
    double c=1.0/(1.0/a + 1.0/b);
    return c;
}
int main(){
    fast_io;
    int t;cin>>t;
    for(int i=0;i<t;i++){
        double x,y,c;cin>>x>>y>>c;
        double left=0,right=min(x,y);
        while((right-left)>=1e-7){
            double mid=(right+left)/2.0000;
            if(calculation(x,y,mid)>c) left=mid;
            else right=mid;
        }
        cout<<fixed<<setprecision(10)<<"Case "<<i+1<<": "<<left<<endline;
    }
    return 0;
}