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
   int t;
   cin >> t;
   while(t--)
   {
       int n, k;
       cin >> n >> k;
       int even = n - 2 * (k - 1);
       if (n - k + 1 > 0 && (n - k + 1) % 2 == 1)
       {
           cout << "YES" << endl;
           for (int i = 0; i < k - 1; i++)
           {
               cout << 1 << " ";
           }
           cout << n - k + 1 << endl;
       }
       else if(even % 2 == 0 && even >= 0)
       {
           for (int i = 0; i < k - 1; i++)
           {
               cout << 2 << " ";
           }
           cout << even << endl;
       }
       else
       {
           cout << "NO" << endl;
       }
      }
}