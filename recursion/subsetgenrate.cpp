#include <bits/stdc++.h>
using namespace std;
vector<vector<int>>subsets;

void generate(vector<int>&subset,int i,vector<int> &nums)
{
	if(i==nums.size())
	{
		subsets.push_back(subset);
		return ;
	}

	generate(subset,i+1,nums);
	subset.push_back(nums[i]);
	generate(subset,i+1,nums);
	subset.pop_back(); 

}




int main()
{
	
	int n;
	cin>>n;
	vector<int>nums(n);
	vector<int>empty;
	for (int i = 0; i <n; ++i)
	{
		cin>>nums[i];
		//cout<<nums[i]<<endl;
	}
	generate(empty,0,nums);
	for(auto ele:subsets)
	{
		for(auto ptr:ele)
		{
			cout<<ptr<<" ";
		}
		cout<<endl;
	}
	
}
