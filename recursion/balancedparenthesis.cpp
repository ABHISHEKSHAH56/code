#include <bits/stdc++.h>
using namespace std;

#define  ll long long


void subset(int open ,int close ,string op,vector<string> &v)
{
	if(open==0 && close==0)
	{
		v.push_back(op);
		return ;
	}
	if(open !=0)
	{
		string op1=op;
		op1.push_back('(');
		subset(open-1,close,op1,v);
	}
	if(close>open)
	{
		string op2=op;
		op2.push_back(')');
		subset(open,close-1,op2,v);
	}
	
}


int main()
{
	
	int n;
	cin>>n;
	int right=n;
	int left=n;
	vector<string>st;
	string op="";

	subset(right,left,op,st);
	for(auto ptr:st)
	{
		cout<<ptr<<endl;
	}
}