#include <bits/stdc++.h>
using namespace std;

#define  ll long long

//998244352---2^23*7*17;

void insertfun(stack<int> &v,int temp)
{
	if(v.size()==0|| v.top()<=temp)
	{
		v.push(temp);
		return ;
	}
	int val= v.top();
	v.pop();
	insertfun(v,temp);
	v.push(val);
	return;

}

void  sortarray(stack<int >&arr)
{
	if(arr.size()==1)
	{
		return ;

	}
	int temp=arr.top();
	arr.pop();
	sortarray(arr);
	insertfun(arr,temp);
	
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
	 sortarray(arr);
	while(!arr.empty())
	{
		cout<<arr.top()<<endl;
		arr.pop();
	}
}