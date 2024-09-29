#include <stdio.h>

int main() {
    int t; // Number of test cases
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        
        int arr[100];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        int max_val = 0;  // To store the maximum value
        int red_count = 0; // To count the number of red elements

        for (int i = 0; i < n; i += 2) {
            if (arr[i] > max_val) {
                max_val = arr[i];
            }
            red_count++;
        }

        printf("%d\n", max_val + red_count);
    }

    return 0;
}
