#include <stdio.h>

int max_score(int arr[], int n, int start) {
    int max_val = 0;
    int red_count = 0;
    
 
    for (int i = start; i < n; i += 2) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
        red_count++;
    }
    
    return max_val + red_count;
}

int main() {
    int t; 
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int arr[100];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

 
        int score_from_0 = max_score(arr, n, 0);
        int score_from_1 = max_score(arr, n, 1);

 
        printf("%d\n", score_from_0 > score_from_1 ? score_from_0 : score_from_1);
    }

    return 0;
}
