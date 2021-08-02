#include <bits/stdc++.h>
using namespace std;

#define  ll long long

//998244352---2^23*7*17;

void insertfun(vector<int> &v,int temp)
{
	if(v.size()==0|| v[v.size()-1]<=temp)
	{
		v.push_back(temp);
		return ;
	}
	int val= v[v.size()-1]; 
	v.pop_back();
	insertfun(v,temp);
	v.push_back(val);
	return;

}

void  sortarray(vector<int >&arr)
{
	if(arr.size()==1)
	{
		return ;

	}
	int temp=arr[arr.size()-1];
	arr.pop_back();
	sortarray(arr);
	insertfun(arr,temp);
	
}

int main()
{
	
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	  sortarray(arr);
	for(auto pt:arr)
	{
		cout<<pt<<" ";
	}
}