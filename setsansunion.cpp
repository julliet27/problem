#include<bits/stdc++.h>
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
int main()
{
    fast_cin();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif   
    int t;
    cin>>t;
    while(t--)
        {
        set<int>s;
        int n;
        cin>>n;
        set<int>id[n];
        for(int i=0;i<n;i++)
        {
            int k;
            cin>>k;
            while(k--)
            {
                int x;
                cin>>x;
                id[i].insert(x);
                s.insert(x);
            }
        }
        int m=-1;
        for(auto &v:s)
        {
            set<int>temp;
            for(int j=0;j<n;j++)
            {
                if(id[j].find(v)!=id[j].end())
                continue;
                for(auto &u:id[j])
                temp.insert(u);
            }
            m=max(m,(int)temp.size());
        }
        cout<<m<<endl;
        }
    
    
}