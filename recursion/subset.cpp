#include <bits/stdc++.h>
using namespace std;

#define  ll long long


void subset(string op, string str)
{
	if(str.length()==0)
	{
		cout<<op<<endl;
		return;
	}
	string op1=op;
	string op2=op;
	
	op2.push_back(str[0]);	
	str.erase(str.begin()+0);
	subset(op1,str);
	subset(op2,str);
	return ;
}


int main()
{
	
	string str;
	cin>>str;
	//cout<<str;
	string op="";
	

	subset(op,str);
}