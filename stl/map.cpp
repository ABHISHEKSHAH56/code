#include <bits/stdc++.h>
using namespace std;
void print(map<int, string> &m)
{
        cout << "size ->" << m.size() << endl;
        for (auto &it : m)
        {
                cout << it.first << " " << it.second << endl;
        }
}

void question()
{
        map<string, int> m;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
                string s;
                cin >> s;
                m[s]++;
        }
        for (auto it : m)
        {
                cout << it.first << " " << it.second << endl;
        }
}

int main()
{

        question();
        map<int, string> m;
        m[1] = "hnj"; //o(log(n))
        m[2] = "lkmjn";
        m[5] = "kmkj";
        m[6]; //--save blank string
              // m["absbs"] = "bdbdbd"; //string.size()*log(n)
        m.insert({8, "lklk"});
        //map<int, string>::iterator it;
        for (auto it = m.begin(); it != m.end(); it++)
        {
                cout << (*it).first << " " << (*it).second << endl;
        } // for iteration complete --no(log(n))

        //map is always unique

        auto d = m.find(3); //o(log(n))
        if (d == m.end())
        {
                cout << "no value" << endl;
        }
        else
        {
                cout << d->first << " " << d->second << endl;
        }
        m.erase(d); //log(n)
        print(m);
        //if we put the that element in earse that is not exist they will give error message
}

/**
 *?string question 
 * 
 *  **/
