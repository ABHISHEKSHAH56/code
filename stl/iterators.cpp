#include <bits/stdc++.h>
using namespace std;
int main()
{

        vector<pair<int, int>> v = {{1, 2}};
        vector<pair<int, int>>::iterator it;
        for (it = v.begin(); it != v.end(); it++)
        {
                cout << (*it).first << " " << (it->second) << endl;
        }
        //Sort snippet for iteration
        for (pair<int, int> ram : v)
        {
                cout << ram.first << " " << ram.second << endl;
        }
        vector<int> vg = {1, 2, 4, 5, 6};
        for (int value : vg)
        {
                value++;
                cout << value << " ";
        }
        // by using reference we get the actual vecotr not copy
        for (int &value : vg)
        {
                value++;
                cout << value << " ";
        }

        //auto-->keyword is auto detect data type
        cout << endl;
        for (auto it = v.begin(); it != v.end(); it++)
        {
                cout << (*it).first << " " << (it->second) << endl;
        }
        for (auto &value : vg)
        {
                value++;
                cout << value << " ";
        }
}