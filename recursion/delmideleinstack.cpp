#include <bits/stdc++.h>
using namespace std;

#define  ll long long

//998244352---2^23*7*17;
//we have to delete the element from the stack--n/2+1 


void deletemiddle(stack<int >&arr,int k)
{
	if(k==1)
	{
		arr.pop();
		return;

	}
	int temp=arr.top();
	arr.pop();
	deletemiddle(arr,k-1);
	arr.push(temp);
	
	
}

int main()
{
	
	int n;
	cin>>n;
	stack<int> arr;
	for(int i=0; i<n; i++)
	{
		int x;
		cin>>x;
		arr.push(x);
	}
	int k=arr.size()/2+1;
	deletemiddle(arr,k);
	while(!arr.empty())
	{
		cout<<arr.top()<<endl;
		arr.pop();
	}
}