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
       string s;
       cin >> s;
       vector<int> scores;
       for (int i = 0; i < s.size(); i++)
       {
           if(s[i] == '1')
           {
               int k = i;
               int count = 0;
               while(k < s.size() && s[k] == '1')
               {
                   k++;
                   count++;
               }
               scores.push_back(count);
               i = k;
           }
       }
       sort(scores.begin(), scores.end(),greater<int>());
       lli score = 0;
       for (int i = 0; i < scores.size(); i += 2)
       {
           score += scores[i];
       }
       cout << score << endl;
   }
}