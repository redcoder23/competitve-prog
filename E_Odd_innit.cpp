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
     int t;
     cin>>t;
     while(t--)
     {
        int n;
        cin>>n;
        int arr[n]; 
        int sum=0;
        for(int i=0;i<n;i++)
       {
          cin>>arr[i]; 
          sum+=arr[i];
       } 
       int s1=arr[0];
       int flag=0; 

        for(int i=0;i<n;i++)
       { 
         if ((s1*(sum-s1))%2==1)
            { 
                cout<<"YES "<<endl;   
                flag=1;
                break;
            }
           else 
           {
               sum-=arr[i+1];
               s1+=arr[i+1];
           }
       } 
       if(flag==0)
       cout<<"NO"<<endl;
     }
 }