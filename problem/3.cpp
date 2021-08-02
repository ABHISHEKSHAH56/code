#include <bits/stdc++.h>
using namespace std;

#define  ll long long

//998244352---2^23*7*17;

//we have to design grammar 
//grammer rule --
//base condition N=1,K=1-->0
//0-->01
//1--10
//for exam
//N=1--0
//N=2-01
//N-3--0110


int solve(int n, int k)
{
	if(n==1 && k==1)
	{
		return 0;
	}
	int mid= pow(2,n-1)/2;
	if(k<=mid)
	{
		return solve(n-1,k);
	}

	else
	{
		return ! solve(n-1,k-mid);
	}


}




int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		vector<ll>v(n);
		for (int i = 0; i < n; ++i)
		{
			cin>>v[i];
		}
		 int min = *min_element(v.begin(), v.end());
        cout << min << endl;
        int max = *max_element(v.begin(), v.end());
        cout << max << endl;
		
		// int pos=find(v.begin(),v.end(),max);
		// v.erase(pos);
		// int second_max=*max_element(v.begin(),v.end());
		// cout<<max*second_max<<endl;
	}
}