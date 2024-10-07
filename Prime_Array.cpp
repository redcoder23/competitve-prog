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
#define IOS (ios::sync_with_stdio(0), cin.tie(0), cout.tie(0));
signed main()
{
    IOS
        fast_io
            vector<bool>
                isprime(1e5 + 1, true);
    isprime[0] = false;
    isprime[1] = false;
    for (int i = 2; i * i <= 1e5; i++)
    {
        for (int j = i * i; j <= 1e5; j += i)
        {
            if (isprime[i])
            {
                isprime[j] = false;
            }
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        int c = 0;
        int pc=0;
        frlp(i, 0, n)
        {  
          cin >> v[i];
          if(v[i]==1)
          c++;
          if(isprime[v[i]])
          pc++;
        } 
        (c>=2)?(cout<<(c*(c-1)/2)*pc<<endl):(cout<<0<<endl);
    }
}