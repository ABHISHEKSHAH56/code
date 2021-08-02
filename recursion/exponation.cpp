#include<bits/stdc++.h>
using namespace std;

const int M=1e9+7;

int binaryexp(int a,int b)
{
	if(b==0)
	{
		return 1;
	}
	long res=binaryexp(a,b/2);
	if(b&1)
	{
		return a*res*res;
	}
	else
	{
		return res*res;
	}
}

int main()
{

	int a=2;int b=8;
	cout<<binaryexp(a,b)<<endl;
}