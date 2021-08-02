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

void  solve(int s, int d,int h,int n,int & count)
{
	count ++;
	if(n==1)
	{
		cout<<"moving plate "<<n<<" from"<<s<<"to"<<d<<endl;
		return ;

	}

	solve(s,h,d,n-1,count);
	cout<<"moving plate "<<n<<" from"<<s<<"to"<<d<<endl;
	solve(h,d,s,n-1,count);
	return ;
		
	
}

int main()
{
	
	int n;
	cin>>n;
	int s=1;
	int h=2;
	int d=3;
	int count=0;
	solve(s,d,h,n,count);
	cout<<"no of step taken "<<count<<endl;
}