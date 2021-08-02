#include <bits/stdc++.h>
using namespace std;

#define  ll long long

//998244352---2^23*7*17;

int main()
{
	ll n;
	cin>>n;
	map<long long,int>factor; //store<prime ,power>

	for (ll i = 2; i*i*i <=n; ++i)
	{
		while(n%i==0)
		{
			factor[i]++;
			n/=i; //agr 2 ke liye humne dekh liye tha 4 ke liya koi jaruraur t nhi hai 
		}
	}	
	if(n>1)
	{
		
		if(isprime(n)) factor[n]++;
		else if(isprime((ll)sqrt((long double )n)) && ((ll)sqrt((long double)n) *  (ll)sqrt((long double)n) )==n ) factor[(ll)sqrt((long double)n)]+2;
		else{
			factor[-1]++;
			factor[-2]++;
		}

		
	}
	for(auto it :factor)
	{
		cout<<"x"<<it.first<<"^"<<it.second;
	}
}