#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> v(m);

    
    for (int i = 0; i < m; i++) {
        cin >> v[i];
    }

    
    sort(v.begin(), v.end());

    
    int minDifference = INT_MAX;

    // Loop through the sorted array and calculate min difference for each subarray of size n
    for (int i = 0; i <= m - n; i++) {
        int difference = v[i + n - 1] - v[i]; // Max - Min in the subarray
        minDifference = min(minDifference, difference);
    }

    
    cout << minDifference;

    return 0;
}
