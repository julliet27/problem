#include <bits/stdc++.h>
#define endline "\n"
using namespace std;

int NextPattern(string pat, int M, int i, int j)
{
	if (i < M && j == pat[i])
		return i+1;
    int l;
	for (int k = i; k > 0; k--)
	{
		if (pat[k-1] == j)
		{
			for (int l = 0; l < k-1; l++)
				if (pat[l] != pat[i-k+1+l])
					break;
			if (l == k-1)
				return k;
		}
	}

	return 0;
}


void search(string pat, string txt)
{
	int M = pat.size();
	int N = txt.size();

	int arr[M+1][256];

	for (int i = 0; i <= M; i++){
		for (int j = 0; j < 256; j++){
			arr[i][j] = NextPattern(pat, M, i, j);
        }
    }
    int tmp=0;
	for (int i = 0; i < N; i++)
	{
		tmp = arr[tmp][txt[i]];
		if (tmp == M)
			cout<<" Pattern found at index "<< i-M+1<<endl;
	}
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
	string txt = "AAABCBBJHFIABCDJFUIRBHBCABCSDKDFLFJKABABBBBCABC";
	string pattern = "ABC";
	search(pattern, txt);
	return 0;
}
