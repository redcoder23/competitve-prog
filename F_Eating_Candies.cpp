#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
#define all(x) x.begin(), x.end()
typedef unsigned long long ULL;
#define int long long
#define pb push_back
#define endl '\n'
#define fast_io (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define frlp(i, start, end) for (int i = start; i < end; i++)
#define lli long long int
#define vi vector<int>
#define ff first
#define ss second
#define ii pair<int, int>
const int MOD = 1e9 + 7;
#define PI 3.1415926535897932384626
const int INF = LLONG_MAX >> 1;
#define mst(a, b) memset(a, b, sizeof a)
bool cmp(pair<int, int> &a,
         pair<int, int> &b)
{
    return a.second < b.second;
}
int lcm(int a, int b)
{
    return (a * b) / __gcd(a, b);
}
#define IOS (ios::sync_with_stdio(0), cin.tie(0), cout.tie(0));
signed main()
{
    IOS
        fast_io int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> v[i];
        int f = 1, r = n;
        int fsum = 0, rsum = 0;
        int idx = 0;
        int c1 = 1, c2 = 1;

            fsum += v[f];
            rsum += v[r];
        while (f < r)
        {
            if (fsum < rsum)
            {
                ++f;
                ++c1;
                 fsum+=v[f];
             }
            else if (fsum > rsum)
            {
                --r;
                ++c2; 
                rsum+=v[r];
            }
            if (fsum == rsum)
            {
                idx = max(idx, c1 + c2);
                f++, r--;   
                ++c1,++c2;
                fsum+=v[f];
                rsum+=v[r];
            }
        // cout<<c1<<" "<<c2<<endl;
        }  
        cout << idx << endl;
    }
}