#include<bits/stdc++.h>
#define ll long long
#define u int
#define endline "\n"
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
void SieveOfEratosthenes(int n){ 
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
    prime[1]=false;
    for (int p = 2; p * p <= n; p++) {
            if (prime[p] == true) {
            	for (int i = p * p; i <= n; i += p)
                    prime[i] = false;
            }
    }
    for(int i=1;i<=n;i++){
        if(prime[i]){
            cout<<i<<" ";
        }
    }
}
int power(int a, int n, int mod)
{
    int res = 1;
    a = a % mod;
 
    while (n > 0)
    {
        if (n & 1) res = (res*a) % mod;
        n = n>>1;
        a = (a*a) % mod;
    }
    return res;
}
bool Fermet_test(int n, int k){

   if (n == 1)  return false;
   if (n == 3 || n==2) return true;
   while (k>0){
       int a = 2 + rand()%(n-4); 
       if (__gcd(n, a) != 1)
          return false;

       if (power(a, n-1, n) != 1)
          return false;
 
       k--;
    }
 
    return true;
}
bool miillerTest(int n, int k)
{
    if (n <= 1 || n == 4)  return false;
    if (n <= 3) return true;
 
  
    int d = n - 1;
    while (d % 2 == 0)
        d /= 2;
 
 
    int a = 2 + rand() % (n - 4);

    int x = power(a, d, n);
 
    if (x == 1  || x == n-1)
       return true;
 
    while (d != n-1)
    {
        x = (x * x) % n;
        d *= 2;
 
        if (x == 1)      return false;
        if (x == n-1)    return true;
    }
    return false;
}
int main(){
    fast_cin();
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    SieveOfEratosthenes(1000000);

    if(Fermet_test(5,1000000)){
        cout<<"Prime!"<<endline;
    }
    else cout<<"Not Prime!"<<endline;

    if(miillerTest(5,1000000)){
        cout<<"Prime!"<<endline;
    }
    else cout<<"Not Prime!"<<endline;
    return 0;
}