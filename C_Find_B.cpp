#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

bool isGoodSubarray(vector<int>& c, int l, int r) {
    unordered_map<int, int> freq;
    int sum_c = 0;

    // Calculate the sum of elements in the subarray and their frequencies
    for (int i = l - 1; i <= r - 1; ++i) {
        sum_c += c[i];
        freq[c[i]]++;
    }

    // Check if there exists an array b satisfying the conditions
    for (int i = l - 1; i <= r - 1; ++i) {
        if (sum_c - c[i] != c[i] && freq[sum_c - c[i]] > 0)
            return true;
    }
    
    return false;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<int> c(n);

        // Input array c
        for (int i = 0; i < n; ++i) {
            cin >> c[i];
        }

        // Process queries
        for (int i = 0; i < q; ++i) {
            int l, r;
            cin >> l >> r;
            if (isGoodSubarray(c, l, r)) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }

    return 0;
}
