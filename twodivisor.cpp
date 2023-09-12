#include<bits/stdc++.h>
using namespace std;
int n,i,x,k,p=1e7,j,a[500001],b[500001],f[10000001];
int main(){
	ios::sync_with_stdio(0);cin.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif   
	cin>>n;
	for(i=2;i<=p;i++)if(!f[i])for(j=i;j<=p;j+=i)f[j]=i;
	for(i=1;i<=n;i++){
		cin>>x;
		k=f[x];a[i]=1;
		while(x/a[i]%k==0)a[i]*=k;
		b[i]=x/a[i];
        
		if(a[i]==1||b[i]==1)a[i]=b[i]=-1;
	}
	for(i=1;i<=n;i++)cout<<a[i]<<" ";
	cout<<endl;
	for(i=1;i<=n;i++)cout<<b[i]<<" ";
	cout<<endl;
}