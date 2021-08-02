 #include <bits/stdc++.h>
using namespace std;
//multi set problem 

/*
https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/monk-and-the-magical-candy-bags/?fbclid=IwAR2kDiVkEaxu9dkCTCUhzXLuIccNn0Gz3dSfkaSUjlDE6Nb9UHMzt8HNDo4
*/

int main()
{
	int t,n,k;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		long long int sum=0;
		 multiset < long long int > arr; 
		 
		for (int i = 0; i < n; ++i)
		{
			long long int x;
			cin>>x;
			arr.insert(x);
		}
		for (int i = 0; i < k; ++i)
		{
			auto last= (--arr.end());
			long long  max = *last;
			sum+=max;
			arr.erase(last);
			arr.insert(max/2);

		}
		cout<<sum<<endl;

	}
}