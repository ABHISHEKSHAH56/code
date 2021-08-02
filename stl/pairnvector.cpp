#include <bits/stdc++.h>
using namespace std;
//v.size()---O(1)

void vectorprint(vector<int> v)
{
        for (int i = 0; i < v.size(); i++)
        {
                cout << v[i] << " ";
        }
}

int main()
{
        pair<int, string> p;
        /**
         *! here how be declare the pair
         **here is what using refernce--vhi ek varibale idhar se udhar ho gya 
         *?
         */
        // p = make_pair(2, "abc");
        p = {3, "adc"};

        pair<int, string> &p1 = p;

        p1.first = 5;
        cout << p.first << " " << p.second << endl;
        pair<int, int> array[5];
        array[0] = {3, 4};
        array[1] = {5, 6};
        array[2] = {5, 8};
        swap(array[0], array[2]);
        for (int i = 0; i < 3; i++)
        {
                cout << array[i].first << " " << array[i].second << endl;
        }

        /**vector */
        vector<int> v;
}

/**
 *?Note:alway use refernce 
 ** as without referernce --copy takes --o(n) times 
 ** or hume same vector hi pass karna hai to use refernce 
 * */

void int()
{
}