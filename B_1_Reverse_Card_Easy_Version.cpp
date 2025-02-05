#include<bits/stdc++.h>
#include<unordered_map>
using namespace std; 
#define all(x)  x.begin(),x.end()
typedef unsigned long long ULL;
#define int long long
#define pb push_back
#define endl '\n' 
#define fast_io (ios_base::sync_with_stdio(false),cin.tie(NULL));
#define frlp(i, start, end) for (int i = start; i < end; i++)
#define lli long long int
#define vi vector<int>
#define ff first
#define ss second
#define ii pair<int, int>
const int MOD = 1e9 + 7;
#define PI 3.1415926535897932384626
const int INF = LLONG_MAX >> 1;
#define mst(a,b) memset(a,b,sizeof a)
 #define IOS ( ios::sync_with_stdio(0), cin.tie(0), cout.tie(0));
signed main ()
 { 
 IOS
fast_io
   int t;
  cin>>t;
  while(t--)
  {
    int n,m;
    cin>>n>>m;
    int ans=0;
    int c=0;
    int   a,b;  //a<=n && b<=m 
    for(int i=1;i<=m;i++) 
    {        
        c=(((n/i)+1)/i); 
        /*
        n/i means that the no of multiples of b in a 
        */
        ans+=c;
 
     }
    cout<<ans-1<<endl;    
  }  
 }