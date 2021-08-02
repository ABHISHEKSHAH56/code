#include <bits/stdc++.h>
using namespace std;

#define  ll long long





int main()
{
	
	int n,k;
	cin>>n>>k;
	vector<int>arr(n);
	for (int i = 0; i <n; ++i)
	{
		arr[i]=i;
	}
	k--;
	int index=0;
	int ans=-1;
	

	subset(arr,k,index,ans);
	cout<<ans<<endl;
}