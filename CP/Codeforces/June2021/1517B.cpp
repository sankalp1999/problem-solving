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
      int n, m;
      cin >> n >> m;
      vector < vector<int> b(n, vector<int>(m));
      vector<pair<int, int>> a;
      a.reserve(n * m);
      for (int i = 0; i < n; i++)
      {
          for (int j = 0; j < m; j++)
          {
              cin >> b[i][j];
              a.push_back({B[i][j], i});
          }
      }
      sort(a.begin(), a.end());
   }