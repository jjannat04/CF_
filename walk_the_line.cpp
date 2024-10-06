#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int case_num = 1; case_num <= t; case_num++) {
        int n;
        long long k; // Use long long for K
        cin >> n >> k;
        vector<long long> arr(n); // Use long long for the crossing times
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        // Sort the crossing times
        sort(arr.begin(), arr.end());

        long long total_time = 0;
        int left = n - 1; // Pointer for the slowest traveler

        while (left >= 3) {
            // Two strategies:
            // 1. Two slowest cross, one fastest returns
            // 2. Two fastest cross, one fastest returns
            long long option1 = arr[left] + arr[left - 1] + 2 * arr[0]; // Two slowest cross, one fastest returns
            long long option2 = 2 * arr[1] + arr[left]; // Two fastest cross, one fastest returns
            total_time += min(option1, option2);
            left -= 2; // Two travelers have crossed
        }

        // Handle the last three travelers
        if (left == 2) {
            total_time += arr[2] + arr[1] + arr[0]; // All cross
        } else if (left == 1) {
            total_time += arr[1]; // One crosses
        } else if (left == 0) {
            total_time += arr[0]; // One crosses
        }

        if (total_time <= k) {
            cout << "Case #" << case_num << ": YES" << endl;
        } else {
            cout << "Case #" << case_num << ": NO" << endl;
        }
    }
    return 0;
}
