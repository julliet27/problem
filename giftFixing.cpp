// C++ program to demonstrate working of
// extended Euclidean Algorithm
#include <bits/stdc++.h>
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

// Function for extended Euclidean Algorithm
int gcdExtended(int a, int b, int *x, int *y)
{
	// Base Case
	if (a == 0)
	{
		*x = 0;
		*y = 1;
		return b;
	}

	int x1, y1; // To store results of recursive call
	int gcd = gcdExtended(b%a, a, &x1, &y1);

	// Update x and y using results of
	// recursive callasdfghjkl;'
	*x = y1 - (b/a) * x1;
	*y = x1;
	cout<<*x<<" "<<*y<<" "<<x1<<" "<<y1<<"\n";

	return gcd;
}

// Driver Code
int main()
{
    fast_cin();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
	int x, y, a = 35, b = 15;
	int g = gcdExtended(a, b, &x, &y);
	// cout << "GCD(" << a << ", " << b
	// 	<< ") = " << g << endl;
	return 0;
}
