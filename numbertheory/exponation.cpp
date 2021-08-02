#include<bits/stdc++.h>
using namespace std;

const int M=1e9+7;

int binaryexp(int a,int b)
{
	if(b==0)
	{
		return 1;
	}
	int res=binaryexp(a,b/2);
	if(b&1)  //odd checker
	{
		return (a*((res*1LL*res)%M))%M;
	}
	else
	{
		return res*1LL*res%M;
	}
}

long long binExpIter(long a,long b)
{
	long long ans=1;
	while(b)
	{
		if(b&1)
		{
			ans=ans*a%M;
		}
		a=(a*a)%M;
		b>>=1;

	}
	return ans;
}

int main()
{

	int a=2525562;int b=8526631;
	cout<<binExpIter(a,b)<<endl;
}