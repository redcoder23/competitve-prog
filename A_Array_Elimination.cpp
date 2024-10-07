// #include <bits/stdc++.h>
// #include <utility>
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
//     IOS
//         fast_io  
//         int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> v(n);
//         set<int> st;
//         frlp(i, 0, n)
//         {
//             cin >> v[i];
//             st.insert(v[i]);
//         }
//         if (st.size() == 1 && *st.begin() == 0)
//         {
//             for (int i = 1; i <= n; i++)
//                 cout << i << " ";
//             cout << endl;
//         }
//         else
//         {
//             vector<int> bits(32, 0);
//             frlp(i, 0, n)
//             {
//                 for (int j = 0; j < 32; j++)
//                 {
//                     if ((1LL << j) & v[i])
//                     {
//                         bits[j]++;
//                     }
//                 }
//             }
//             int hcf = 0;
//             frlp(i, 0, 32)
//             {
//                 hcf = __gcd(hcf, bits[i]);
//             }
//             vector<int> ans;
//             for (int i = 1; i * i <= hcf; i++)
//             {
//                 if (hcf % i == 0)
//                 {
//                     if (i != hcf / i)
//                     {
//                         ans.push_back(hcf / i);
//                     }
//                     ans.push_back(i);
//                 }
//             }
//             sort(all(ans));
//             for (auto &x : ans)
//                 cout << x << " "; 
//                 cout<<endl;
//         }
//     }
// }




#include <bits/stdc++.h>
using namespace std;

vector<int> find_divisors(int g) {
    vector<int> divisors;
    for (int i = 1; i * i <= g; ++i) {
        if (g % i == 0) {
            divisors.push_back(i);
            if (i != g / i) {
                divisors.push_back(g / i);
            }
        }
    }
    sort(divisors.begin(), divisors.end());
    return divisors;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        // Compute GCD of the array
        int g = a[0];
        for (int i = 1; i < n; ++i) {
            g = __gcd(g, a[i]);
        }

        // Find all divisors of the GCD
        vector<int> divisors = find_divisors(g);

        // Print the result
        for (int k : divisors) {
            cout << k << " ";
        }
        cout << endl;
    }

    return 0;
}
