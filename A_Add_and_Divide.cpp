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
int f(int base, int power, int m)
{
    int res = 1;
    while (power != 0)
    {
        if (power & 1)
        {
            res = (res % m * base % m) % m;
            --power;
        }
        else
        {
            base = (base % m * base % m) % m;
            power /= 2;
        }
    }
    return res;
}
int mod(int n, int m)
{
    return ((n % m) + m) % m;
}
int lcm(int a, int b)
{
    return (a * b) / __gcd(a, b);
}
string decbin(int num)
{
    string str;
    while (num)
    {
        str += (num & 1) ? '1' : '0';
        num >>= 1;
    }
    return str;
}
int ternary_search(int l, int r, int x, int *ar)
{
    if (r >= l)
    {
        int mid1 = l + (r - l) / 3;
        int mid2 = r - (r - l) / 3;
        if (ar[mid1] == x)
            return mid1;
        if (ar[mid2] == x)
            return mid2;
        if (x < ar[mid1])
            return ternary_search(l, mid1 - 1, x, ar);
        else if (x > ar[mid2])
            return ternary_search(mid2 + 1, r, x, ar);
        else
            return ternary_search(mid1 + 1, mid2 - 1, x, ar);
    }
    return -1;
}
#define IOS (ios::sync_with_stdio(0), cin.tie(0), cout.tie(0));
signed main()
{
    IOS
        fast_io int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int minf = 40;
        frlp(i, 0, 30)
        {
            if (b + i == 1)
            {
                continue;
            }
            int count = 0, temp = a;
            while (temp!= 0)
            {
                temp /= (b + i);
                count++;
            }
            minf = min(count + i, minf);
        }
        cout << minf << endl;
    }
}