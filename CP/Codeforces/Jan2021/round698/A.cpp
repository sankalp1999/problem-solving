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
       int n;
       cin >> n;
       vector<int> v(n);
       for (int i = 0; i < n; i++)
       {
           cin >> v[i];
       }
       vector<int> visited(n + 1, 0);
       int count = 0;
       int loops = 0;
       while (count < n)
       {
            
            int left = 0;
            while(visited[left] != 0 && left < n)
            {
                left++;
            }
            visited[left] = 1;
            count++;
            for (int j = left; j < n; j++)
            {
            
                if(visited[j] ==  0 && v[left] < v[j] )
                {
                    visited[j] = 1;
                    
                    count++;
                }
            }
            
            loops++;
       }
       cout << loops << endl;
   }
}