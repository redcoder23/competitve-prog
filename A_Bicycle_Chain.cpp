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
        fast_io int t;
    cin >> t;
    double arr[t];
    for (int i = 0; i < t; i++)
        cin >> arr[i];
    int n;
    cin >> n;
    double v[n];
    for (int i = 0; i < n; i++)
        cin >> v[i];

    vector<double> vt;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < t; j++)
        {
            double m1 = v[i] / arr[j];
            if (((int)m1 ==m1))
                vt.push_back(v[i] / arr[j]);
        }
    }
  
    sort(vt.begin(),vt.end());
    int maxf=vt[vt.size()-1];
    int c=1;
    for(int i=vt.size()-2;i>=0;i--)
    {
        if(vt[i]==maxf)
        c++;
        else
        break;
    }
    cout<<c<<endl;
}

// double a=13 ,b=4;
// int m=a/b; //3
// double m1=a/b; //3.25
// cout<<m<<" "<<m1;
