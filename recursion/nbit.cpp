#include <bits/stdc++.h>
using namespace std;

#define  ll long long


void subset(int one,int zero,int n,string op)
{
	if(n==0)
	{
		cout<<op<<endl;
		return;
	}
	string op1=op;
	op1.push_back('1');
	subset(one+1,zero,n-1,op1);
	if(one>zero)
	{
		string op2=op;
		op2.push_back('0');
		subset(one,zero+1,n-1,op2);
	}
	
}


int main()
{
	
	int n;
	cin>>n;
	//cout<<str;
	string op;
	int one=0;
	int zero=0;
	

	subset(one,zero,n,op);
}