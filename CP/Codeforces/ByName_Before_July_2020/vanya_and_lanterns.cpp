#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, l;
	cin >> n >> l;
	int arr[n];
	for(int i = 0;i < n; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr+n);
	int max1 = 2*(arr[0]-0);
	// LOGIC : if twice the distance can overcome next one,
	// then it can be answer 
	
	// Simple math/search based question.....
	for(int i =0; i < n - 1; i++)
	{
		if((arr[i+1] - arr[i]) > max1)
		{
			max1 = arr[i+1] - arr[i];
			// this is already being tested for twice the distance 
			
		}
	}
	if(2*(l - arr[n-1])  > max1)
	{
		max1 = 2*(l - arr[n-1]);
	}
	std::cout << std::setprecision(9) << max1/2.0 << '\n';
  return 0;
}


