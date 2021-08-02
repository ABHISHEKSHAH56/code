#include<bits/stdc++.h>
using namespace std;


int main()
{
	/**arr[]=[1,3,2,4]
	 * 1--3
	 * 3--4
	 * 2--4
	 * 4->-1
	 * bruthforce--n^2
	 */
	 int<vector>v;
	 int n;
	 cin>>n;
	 int arr[n];
	 stack<int>temp;
	 for (int i = 0; i < n; ++i)
	  {
	  	cin>>arr[i];
	  } 

	  for(int i=n-1; i>=0; i--)
	  {
	  	if(temp.size()==0)
	  	{
	  		v.push_back(-1);
	  		temp.push(arr[i]);
	  	}
	  	else if(temp.size()>0 && temp.top()>arr[i])
	  	{
	  		v.push_back(temp.top());
	  		temp.push
	  	}
	  }
}