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
#define IOS (ios::sync_with_stdio(0), cin.tie(0), cout.tie(0));
signed main()
{
    IOS
        fast_io int k;
    cin >> k;
    int n=k;
    int arr[12];
    int sum=0;
    frlp(i, 0, 12)
    {
        cin >> arr[i]; 
        sum+=arr[i];
    }
    sort(arr, arr + 12, [](int x, int y)
         { return x > y; });
    int count = 0, i = 0;
    while (k>0 && i<12)
    {
           k -= arr[i];
            count++;
            i++;
    }
    if (n== 0)
        cout << 0 << endl;
    else
    {
       if(sum<n)
       cout<<-1<<endl;
       else 
       {
        cout<<count<<endl;
       }
    }
}