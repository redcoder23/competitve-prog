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
   if(t==1)
   cout<<1<<endl;
  else if(t==2 || t==3)
   cout<<"NO SOLUTION"<<endl; 
   else if(t==4)
   cout<<"  2 4 1 3"<<endl;
   else  
   {
     int ne,no;
     ne=t/2;
     no=t-ne;
     for(int j=ne;j>=1;j--)
     {
         cout<<2*j<<" ";
     }
     for(int j=no;j>=1;j--)
     {
        cout<<2*j-1<<" ";
     }
   }
 }