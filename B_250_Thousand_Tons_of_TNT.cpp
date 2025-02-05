// #include <bits/stdc++.h>
// #include <unordered_map>
// using namespace std;
// #define all(x) x.begin(), x.end()
// typedef unsigned long long ULL;
// #define int long long
// #define pb push_back
// #define endl '\n'
// #define fast_io (ios_base::sync_with_stdio(false), cin.tie(NULL));
// #define frlp(i, start, end) for (int i = start; i < end; i++)
// #define lli long long int
// #define vi vector<int>
// #define ff first
// #define ss second
// #define ii pair<int, int>
// const int MOD = 1e9 + 7;
// #define PI 3.1415926535897932384626
// const int INF = LLONG_MAX >> 1;
// #define mst(a, b) memset(a, b, sizeof a)
// bool cmp(pair<int, int> &a,
//          pair<int, int> &b)
// {
//     return a.second < b.second;
// }
// int lcm(int a, int b)
// {
//     return (a * b) / __gcd(a, b);
// }
// #define IOS (ios::sync_with_stdio(0), cin.tie(0), cout.tie(0));
// signed main()
// {
//     IOS
//         fast_io int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> arr(n);
//         for(int i=0;i<n;i++)cin>>arr[i];
//         int maxf = INT_MIN, minf = INT_MAX;
//         vector<int>v; 
//         int a=INT_MIN,b=INT_MAX;
//         int diff=INT_MIN;
//         for (int i = 0; i <n/2; i++)
//         {
//             int count = i + 1, sum = 0;
//             if (n % count == 0)
//             {  
//                 diff=INT_MIN; a=INT_MIN,b=INT_MAX;
//                 for (int j = 0; j < n; j++)
//                 {    
//                     sum += arr[j];
//                     --count;
//                     if (count == 0)
//                     {
//                        a=max(sum,a); 
//                        b=min(sum,b);
//                         // v.push_back(sum);
//                         sum = 0, count = i + 1;  
//                         diff=max(diff,a-b);
//                     }
//                 }
//                 // sort(v.begin(), v.end());
//                 maxf = max(maxf,diff);
//                 // v.clear();
//             }
//         }
//         cout << maxf << endl;
//     }
// } 
 

 
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
        vector<int> arr(n);
        for(int i=0;i<n;i++)cin>>arr[i];
        int maxf = 0, minf = 0;
        vector<int>v;
        for (int i = 0; i < n/2; i++)
        {
            int count = i + 1, sum = 0;
            if (n % count == 0)
            {
                for (int j = 0; j < n; j++)
                {  
                    sum += arr[j];
                    --count;
                    if (count == 0)
                    {
                        v.push_back(sum);
                        sum = 0, count = i + 1;
                    }
                }
                sort(v.begin(), v.end());
                maxf = max(maxf,v[v.size()-1]-v[0]);
                v.clear();
            }
        }
        cout << maxf << endl;
    }
}