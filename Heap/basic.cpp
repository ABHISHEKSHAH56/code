#include <bits/stdc++.h>
using namespace std;
typedef pair<int,pair<int,int>>ppi;

int main()
{
	//how to identify ---if we have given k and asking the smallest or largest
	//then we have to use heap
	//if smallest --then--max heap vice versa
	//top push pop --priority queue
	//***max heap***?/

	priority_queue<int> max;

	//min heap
	priority_queue<int,vector<int>,greater<int>> min;
	//if we need to make pair int ----> pair <int>
	//so we define the type name 

	/****kth smallest element ***/
	//cout<<"hello"<<endl;
	int arr[]={7,10,4,3,20,15};
	int k=3;
	for (int i = 0; i < 6; ++i)
	{
		max.push(arr[i]);
		min.push(arr[i]);
		if (max.size()>k)
		{
			max.pop();
			min.pop();
		}
	}
	cout<<max.top()<<endl;
	cout<<min.top()<<endl;






}