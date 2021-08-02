#include <bits/stdc++.h>
using namespace std;
int main()
{
        int n;
        cin >> n;
        // int array[n];
        // for (int i = 0; i < n; i++)
        // {
        //         cin >> array[i]
        // }
        // sort(array, array + n);
        //for vector
        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; i++)
        {
                cin >> v[i].first >> v[i].second;
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < n; i++)
        {
                cout << v[i].first << " " << v[i].second;
        }
}