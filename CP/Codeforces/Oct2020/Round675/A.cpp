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
       lli a, b, c;
       cin >> a >> b >> c;
       vector<long long int> v;
       v.push_back(a);
       v.push_back(b);
       v.push_back(c);
       sort(v.begin(), v.end(), greater<long long int>());
       lli up = v[0] - (v[1] + v[2]);
       lli down = v[0] + v[1] + v[2];
       cout << down - 1 << endl;
   }
}