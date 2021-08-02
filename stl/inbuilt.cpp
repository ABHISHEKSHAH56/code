#include <bits/stdc++.h>
using namespace std;
int main()
{
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
                cin >> v[i];
        }
        int min = *min_element(v.begin(), v.end());
        cout << min << endl;
        int max = *max_element(v.begin(), v.end());
        cout << max << endl;

        //sum of array with some other stuf
        int sum = accumulate(v.begin(), v.end(), 0);
        //agr hume frequency dekhni hai kisis element ki
        int ct = count(v.begin(), v.end(), 6);
        cout << ct << endl;
        int fin = *find(v.begin(), v.end(), 2);
        cout << fin << endl;
        //reverse function string vector array
        reverse(v.begin(), v.end());
        for (auto val : v)
        {
                cout << val << " ";
        }

        //lamda function
        auto sum = [](int x)
        { return x + 2; };
        cout << [](int x)
        { return x + 2; }(2)
             << endl;
}