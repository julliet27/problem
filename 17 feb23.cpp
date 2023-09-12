#include<bits/stdc++.h>
#define endline "\n"
#define ll long long
#define fast_io ios_base::sync_with_stdio(false), cin.tie(nullptr)
using namespace std;
int main()
{
    string str;cin>>str;
    stack<char>s;
    int cnt=0;
    string str_ans="";
    for(int i=0;i<str.size();i++){
        if(str[i]=='(' || str[i]=='['){
            s.push(str[i]);
        }
        else{
            if(str[i]==']'){
                if((s.empty()) || s.top()!='['){
                    cnt=0;
                    str_ans="";
                }
                else{
                    s.pop();
                    cnt++;
                    str_ans="["+str_ans;
                    str_ans=str_ans+"]";
                }
            }
            else if(str[i]==')'){
                if((s.empty()) || s.top()!='('){
                     cnt=0;
                    str_ans="";
                }
                else{
                    s.pop();
                    str_ans="("+str_ans;
                    str_ans=str_ans+")";
                }
            }

        }
    }
    cout<<cnt<<endline;
    cout<<str_ans<<endline;
	return 0;
}
