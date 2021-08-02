#include <bits/stdc++.h>
using namespace std;
void print(set<string> &s)
{
        for (string value : s)
        {
                cout << value << endl;
        }
        for (auto it = s.begin(); it != s.end(); ++it)
        {
                cout << (*it) << endl;
        }
}
int main()
{
        set<string> s;
        //sorted order me !! and unique
        s.insert("abba");
        s.insert("aaaa"); //log(n)

        //aceess
        auto ok = s.find("aaaa"); //log(n)
        if (it != s.end())
        {
                cout << (*ok) << endl;
        }

        print(s);
}
//unorder -->o(1)

//multi set is that where you can sotre dulicate and other thing is similar with set
