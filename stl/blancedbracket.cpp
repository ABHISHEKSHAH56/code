#include <bits/stdc++.h>
using namespace std;
unordered_map<char,int> symbol={{'[',-1},{'{',-2},{'(',-3},{']',1},{'}',2},{')',3}};



string isBalanced(string s)
{
		stack<char>st;
		//cout<<s<<endl;
		for (int i = 0; i <s.size(); ++i)
		{
			if(symbol[s[i]]<0)
			{
				st.push(s[i]);
				//cout<<s[i]<<" ";
			}
			else
			{
				if(st.empty()) return "NO";
				char top=st.top();
				//cout<<top<<endl;
				st.pop();
				if(symbol[top]+symbol[s[i]]) return "NO";
			}
		}
		if(st.empty())return "YES";
		return "NO";
}



int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin>>s;
	cout<<isBalanced(s)<<endl;

	}
	
	
}