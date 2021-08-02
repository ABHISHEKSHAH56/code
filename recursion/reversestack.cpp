#include <bits/stdc++.h>
using namespace std;

#define  ll long long

//998244352---2^23*7*17;
//we have to reverse the stack !!


void  Insertstack(stack<int >&arr,int ele)
{
	if(arr.size()==0)
	{
		arr.push(ele);
		return ;

	}
	int temp=arr.top();
	arr.pop();
	Insertstack(arr,ele);
	arr.push(temp);
	
}




void  reversestack(stack<int >&arr)
{
	if(arr.size()==1)
	{
		return ;

	}
	int temp=arr.top();
	arr.pop();
	reversestack(arr);
	Insertstack(arr,temp);
	return;
	
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
	reversestack(arr);
	while(!arr.empty())
	{
		cout<<arr.top()<<endl;
		arr.pop();
	}
}