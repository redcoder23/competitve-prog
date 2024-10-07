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
int ts(int l, int r, int x, int *ar)
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
            return ts(l, mid1 - 1, x, ar);
        else if (x > ar[mid2])
            return ts(mid2 + 1, r, x, ar);
        else
            return ts(mid1 + 1, mid2 - 1, x, ar);
    }
    return -1;
}
bool alg(int n)
{
    int mask = 0, dig = 0, d;
    while (n)
    {
        d = n % 10 - 1;
        n /= 10;
        mask |= (1 << d);
        dig++;
    }
    return (mask == (1 << dig) - 1);
}
vector<int> ones(int n)
{
    vector<int> v(n + 1, 0);
    v[0] = 0;
    for (int i = 1; i <= n; i++)
        v[i] = v[i >> 1] + (i & 1);
    return v;
}
int modinv(int x, int m = MOD)
{
    return f(x, m - 2, m);
}
template <typename T>
void print(T &&t) { cout << t << endl; }
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
        vector<int> v(n);
        int nn = 0, p = 0;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            
            if (v[i] < 0)
                nn++;
            if (v[i] == 0)
                p = 1;
            sum += abs(v[i]);
            v[i]=abs(v[i]);
        }
        int f = 0, ch;
        if (v[0] < 0)
        {
            f = 1;
            ch = v[0];
        }

        sort(all(v));
        if (nn & 1)
        {
            if (p == 1)
                cout << sum << endl;
            else if (p == 0)
            {
                sum -= abs(2 * v[0]);
                cout << sum << endl;
            }
        }
        else
            cout << sum << endl;
    }
}
