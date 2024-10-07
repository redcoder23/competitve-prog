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
// #define IOS (ios::sync_with_stdio(0), cin.tie(0), cout.tie(0));
// signed main()
// {
//         fast_io
//             string k;
//     cin >> k;
//     int c = 0;
//     int sz = k.length();
//     string z;
//     int arr[4] = {0};
//     for (int i = 0; i < sz; i++)
//     {
//         if (k[i] == 'h' && arr[0] == 0)
//         {
//             z += 'h';
//             arr[0] = 1;
//         }
//         else if (k[i] == 'e' && arr[1] == 0)
//         {
//             if (arr[0] == 1)
//             {
//                 z += 'e';
//                 arr[1] = 1;
//             }
//         }
//         else if (k[i] == 'l' && (arr[1] == 0 || arr[1] == 1))
//         {
//             if (arr[0] == 1 && arr[1] == 1)
//             {
//                 if (arr[2] == 0)
//                 {
//                     z += 'l';
//                     arr[2]++;
//                 }
//                 else if (arr[2] == 1)
//                 {
//                     z += 'l';
//                     arr[2]++;
//                 }
//             }
//         }
//         else if (k[i] == 'o' && arr[0] == 1 && arr[1] == 1 && arr[2] == 2)
//         {
//             if (arr[3] == 0)
//             {
//                 z += 'o';
//                 arr[3]++;
//             }
//         }
//     }
//     // cout << z;
//     if (z == "hello")
//        std:: cout << "YES" << endl;
//     else
//         std::cout << "NO" << endl;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string k;
    cin>>k;
    int sz=k.length();
    string z="hello";
    int p=0;
    int size=0;
   for(int i=0;i<sz;i++)
   {
    if(k[i]==z[p])
     {  
        p++;
         size++;
     }
   } 
   if(size==5)
   cout<<"YES"<<endl;
   else 
   cout<<"NO"<<endl;

}