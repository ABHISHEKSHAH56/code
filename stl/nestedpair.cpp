#include <bits/stdc++.h>
using namespace std;
int main()
{
	map<int,set<string>> st;
	int n;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		int marks;
		string s;
		cin>>s>>marks;
		//st[marks].insert(s);
		st[-1*marks].insert(s);
	}
	// auto last_it=--st.end();
	// while(true)
	// {
	// 	auto &student= last_it->second;
	// 	int mar=last_it->first;
	// 	for(auto stu:student)
	// 	{
	// 		cout<<stu<<" "<<mar<<endl;

	// 	}
	// 	if (last_it ==st.begin())
	// 	{
	// 		break;
	// 	}
	// 	last_it --;
	// }

	for (auto & marks_pair:st)
	{
		auto &students= marks_pair.second;
		int mar=marks_pair.first;
		for(auto student:students)
		{
			cout<<student<<" "<<-1*mar<<endl;
		}
	}

}