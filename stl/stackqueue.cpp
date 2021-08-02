#include <bits/stdc++.h>
using namespace std;
int main()
{
	stack<int>s;
	queue<int>q;
	q.push(5);
	s.push(3);
	while(!q.empty())
	{
		cout<<q.front()<<endl;
		q.pop();

	}
	while(!s.empty())
	{
		cout<<s.top()<<endl;
		s.pop();
	}

	
}