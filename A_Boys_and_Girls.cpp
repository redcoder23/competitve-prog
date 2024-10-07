// #include<iostream>
// #include<string>
// using namespace std;
// #define int long long
// #define fast_io (ios_base::sync_with_stdio(false), cin.tie(NULL));
// #define IOS (ios::sync_with_stdio(0), cin.tie(0), cout.tie(0));
// signed main()
// {
//     IOS
//         fast_io
//         int b, g;
//         cin >> b >> g;
//         int a = min(b, g);
//         string z = "GB", zz = "BG";
//         string ans1, ans2;
//         for (int i = 0; i < a; i++)
//         {
//             ans1 += z;
//             ans2 += zz;
//         }
//         int l = abs(b-g);
//         for (int i = 0; i < l; i++)
//         {
//             if (b > g)
//             {
//                 ans1 += "B";
//                 ans2 += "B";
//             }
//             else if (g > b)
//             {
//                 ans1 += "G";
//                 ans2 += "G";
//             }
//         }
//          //BGBGBB ans 2 //GBGBGBGG  girls more ans1
//         (b>g)?(cout << ans2) : (cout << ans1) << endl;
// }

// // #include <iostream>
// // #include <string>
// // using namespace std;

// // int main()
// // {
// //     int n, m;
// //     cin >> n >> m;

// //     if (n >= m)
// //     {
// //         string s(n+m, 'B');
// //         for (int i = 1; i < m * 2; i += 2)
// //         {
// //             s[i] = 'G';
// //         }
// //         cout << s << endl;
// //     }
// //     else
// //     {
// //         string s(m+n, 'G');
// //         for (int i = 1; i < n * 2; i += 2)
// //         {
// //             s[i] = 'B';
// //         }
// //         cout << s << endl;
// //     }
// //     return 0;
// // }
#include <iostream>
#include <string>

using namespace std;

string alternate_line(int n, int m) {
    // Initialize an empty line
    string line(n + m, ' ');

    // Determine which gender has more students
    char gender1, gender2;
    int count1, count2;
    if (n >= m) {
        gender1 = 'B'; gender2 = 'G';
        count1 = n; count2 = m;
    } else {
        gender1 = 'G'; gender2 = 'B';
        count1 = m; count2 = n;
    }

    // Alternate between placing students of gender1 and gender2
    for (int i = 0; i < n + m; i += 2) {
        line[i] = gender1;
        count1--;
    }
    for (int i = 1; i < n + m; i += 2) {
        line[i] = gender2;
        count2--;
    }

    return line;
}

int main() {
    int n, m;
    cin >> n >> m;

    // Output
    cout << alternate_line(n, m) << endl;

    return 0;
}
