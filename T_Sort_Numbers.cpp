#include<bits/stdc++.h>
using namespace std; 
#define int long long
#define pb push_back
#define endl '\n' 
#define frlp(i, start, end) for (int i = start; i <= end; i++)
#define lli long long int
#define vi vector<int>
#define ff first
#define ss second
#define ii pair<int, int>
const int MOD = 1e9 + 7;
#define PI 3.1415926535897932384626
const int INF = LLONG_MAX >> 1;
signed main ()
 { ios_base::sync_with_stdio(false);
  cin.tie(NULL);
   int arr[3]; 
  int vec[3];
   for(int i=0;i<3;i++)
   {
    cin>>arr[i];
       vec[i]=arr[i];
   }  
   sort(vec,vec+3);
   for(int i=0;i<3;i++)
   cout<<vec[i]<<endl; 
   cout<<endl;
   for(int i=0;i<3;i++)
   cout<<arr[i]<<endl;

 }