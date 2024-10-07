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
    /*
    every number is either odd or even so every 2*x+k*y = 2*(x+(k/2)*y)+k%2;

    now we notice that n = 2*quotient +remainder { rem is 0,1 as numbers are odd or even};

    so basically suppose k=5 
    then 2*x+5*y= n(some n)  =>  2*(x+2*y)+y=n taking 4y common so we notice 
     if k is odd then y is left and the eqn takes form 2*(x+(k/2)*y)+y
     else 
     if k is even then eqn takes form 2*(x+(k/2)*y)+y as y=0 as k is even 
    2*(x+(k/2)*0)+0;
      so we see that y is either 0 or 1 ;
      now using y and k find the values of x then 

      check if(2*x+k*y)==n 

    */
    while (t--)
    {
        int n, k;
        cin >> n >> k;
         int rem =n%2;
         int l=k/2;
         int q=((n-rem)/2) -(rem*l) ;
         if(q*2+ rem*k==n)
         cout<<"YES"<<endl;
         else 
         cout<<"NO"<<endl;
    }
}