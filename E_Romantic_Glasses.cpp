#include <bits/stdc++.h>
#include <utility>
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
#define IOS (ios::sync_with_stdio(0), cin.tie(0), cout.tie(0));
bool cmp(pair<int, int> &a, pair<int, int> &b) { return a.second < b.second; }
signed main()
{
    IOS
        fast_io int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vi v(n);
        frlp(i, 0, n) cin >> v[i];
        vi p(n);
        frlp(i, 0, n)
        {
            if ((i + 1) & 1)
                p[i] = -v[i];
            else
                p[i] = v[i];
        }
        vi pre(n);
        pre[0] = p[0];
        for (int i = 1; i < n; i++)
        {
            pre[i] = pre[i - 1] + p[i];
        }
        map<int, int> mp;
        int f = 0; 
        for (auto x : pre)
        {   
            if (mp[x] || x==0)
            {
                f = 1;
                break;
            }
            mp[x]++;
        }
        (f == 1) ? (cout << "YES"<< endl) : (cout << "NO" << endl);
    }
}