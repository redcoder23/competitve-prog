#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to check if the array can be sorted by the given operation
bool can_be_sorted(int n, const vector<int>& a) {
    vector<int> doubled_array(a.begin(), a.end());
    doubled_array.insert(doubled_array.end(), a.begin(), a.end());

    for (int i = 0; i < n; ++i) {
        vector<int> subarray(doubled_array.begin() + i, doubled_array.begin() + i + n);
        if (is_sorted(subarray.begin(), subarray.end())) {
            return true;
        }
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        if (can_be_sorted(n, a)) {
            cout << "Yes" << '\n';
        } else {
            cout << "No" << '\n';
        }
    }

    return 0;
}
