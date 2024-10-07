#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] <= i + 1)
                ans = 1;
        }
        (ans == 1) ? (cout << "YES" << endl) : (cout << "NO" << endl);
    }
}