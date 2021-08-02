/*
l, r ke beech me se koi pliendorem ban sakta hai yha nhi 
*/

#include <bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int hsh[N][26];

int main ()
{
	//has --0
	int n,q;
	cin>>n>>q;
	string s;
	cin>>s;
	for (int i = 0; i <n; ++i)
	{

		hsh[i][s[i]-'a']++;
		
	}
	for (int i = 0; i <26; ++i)
	{
		for (int j=1; j<=n; ++j)
		{
			hsh[j][i]+=hsh[j-1][i];
		}
	}
	for (int i = 0; i <26; ++i)
	{
		for (int j=1; j<=n; ++j)
		{
			cout<<hsh[j][i]<<" ";
		}
		cout<<endl;
	}
	// while(q--)
	// {
	// 	int l , r; 
	// 	cin>>l>>r;
		int oddct=0;
		for (int i = 0; i <26; ++i)
		{
			int charct=hsh[25][i]-hsh[0][i];
			if(charct%2!=0) oddct++;
		}
		if (oddct>1)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
		
	// }
}

