#include<bits/stdc++.h>
#define REP(i,n) for (int i = 0; i < n; i++)
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define lli long long int
#define INF 1000000000
#define endl '\n'
#define gcd __gcd
const double PI = 3.141592653589793238460;

using namespace std;
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int n;
   cin >> n;

   if( n % 2 == 0)
   {
       cout << -1 << endl;
   }

   else
   {
       for (int i = 0; i <= n - 1; i++)
       {
           cout << i << " ";
       }
       cout << endl;

       for (int i = 0; i <= n - 1; i++)
       {
           cout << i << " ";
       }
       cout << endl;
       for (int i = 0; i <= n - 1; i++)
       {
           cout << (i+i)%n << " ";
       }
       cout << endl;

   }
   
}