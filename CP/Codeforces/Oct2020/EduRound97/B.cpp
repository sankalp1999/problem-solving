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
       lli n;
       cin >> n;
       string s;
       cin >> s;
       lli count = 0;
       lli countzero = 0;
       int flag = 0;
       for (int i = 0; i < n - 1; i++)
       {
         if(s[i] == s[i + 1])
         {
             count++;
         }
        }

       
       cout << ceil(count/2.0) << endl;
   }
}