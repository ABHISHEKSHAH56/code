//https://www.hackerrank.com/challenges/crush/problem

/*
Starting with a 1-indexed array of zeros and a list of operations
for each operation add a value to each the array element between
two given indices, inclusive. Once all operations have been performed
, return the maximum value in the array.

*/
/*
5 3
1 2 100
2 5 100
3 4 100
*/
//200

#include <bits/stdc++.h>
using namespace std;
const int N=1e7+10;
long long int arr[N]; //global array initlized with 0

int main()
{
	int m,n;
	cin>>n>>m;
	while(m--)
	{
		int a,b,k;
		cin>>a>>b>>k;
		arr[a]+=k;
		arr[b+1]-=k;
	}
	//prfix sum 

	for (int i = 1; i <= n; ++i)
	{
		arr[i]+=arr[i-1];
	}
	long long int min=-1;
	for (int i = 1; i <= n; ++i)
	{
		if(min<arr[i])
		{
			min=arr[i];
		}
	}
	cout<<min<<endl;
	return 0;

}