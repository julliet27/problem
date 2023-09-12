#include<bits/stdc++.h>
#define endline "\n"
#define ll long long
#define fast_io ios_base::sync_with_stdio(false), cin.tie(nullptr)
using namespace std;
bool isPalindrome(string s){
        int N = s.size();

        bool flag = true;
        for(int i = 0; i < N/2; i++){
            //N-1-i: left index + right index must equal to N-1
            if(s[i] != s[N-1-i])
                flag = false;
        }
        return flag;
};
void backtrack(vector<vector<string>>& parts, vector<string>& part, string s, int start){
        if(start >= s.size()){
            parts.push_back(part);
        }else{
            for(int i = 1; start + i <= s.size(); i++){
                string token = s.substr(start, i);
                // cout << start << " : " << start+i << " " << token << endl;
                //to speed up, skip upon meeting a token which is not palindrome
                if(!isPalindrome(token)) continue;
                part.push_back(token);
                cout<<i<<endline;
                backtrack(parts, part, s, start+i);
                part.pop_back();
            }
        }
};
int main(){
    //int N = s.size();
    vector<vector<string>> parts;
    vector<string> part;
    backtrack(parts, part, "aab", 0);
}
