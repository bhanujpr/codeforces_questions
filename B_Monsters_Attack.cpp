#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int k;
        cin >> k;
        int a[n];
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back({abs(x), a[i]});
        }

        sort(v.begin(), v.end());
        int sum = 0;
        int ans = 1;
        for (int i = 0; i < v.size(); i++)
        {
            sum += v[i].second;
            int tr = v[i].first;
            int z = sum / k;
            if (sum % k != 0)
                z++;
            if (z > tr)
                ans = 0;
        }
        if (ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}