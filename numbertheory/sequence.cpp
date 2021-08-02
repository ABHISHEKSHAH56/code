#include <bits/stdc++.h>
using namespace std;

#define  ll long long

void factorization(map<ll,int> & factor,int n)
{
	for (ll i = 2; i*i <=n; ++i)
	{
		while(n%i==0)
		{
			factor[i]++;
			n/=i; //agr 2 ke liye humne dekh liye tha 4 ke liya koi jaruraur t nhi hai 
		}
	}

		if (n>1)
		{
			factor[n]++;
		}
}





int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		map<ll,int> factor;
		factorization(factor,n);
		for(auto it:factor)
		{
			cout<<it.first<<"^"<<it.second<<"*";
		}


	}
}