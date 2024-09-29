#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t; // Number of test cases
    cin >> t;
    
    while (t--) {
        int n; // Length of the array
        cin >> n;
        
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int max_val = 0;   // To track the maximum value among the red elements
        int red_count = 0; // To count the number of red elements selected

        // Iterate through the array, trying to select non-adjacent elements
        for (int i = 0; i < n; i += 2) { // i+=2 ensures no adjacent elements are selected
            max_val = max(max_val, arr[i]); // Track the maximum red element
            red_count++; // Count the number of red elements selected
        }

        // Output the result: max value of red element + number of red elements
        cout << (max_val + red_count) << endl;
    }

    return 0;
}
