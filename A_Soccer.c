#include <stdio.h>
int main() {
    int M, N, i, sum;

    for (i = 1; i >= 1; i++) {
        sum = 0;
        scanf("%d %d", &M, &N);
        if (M <= 0 || N <= 0) {
            break;
        }
        if (M > N) {
            int j;
            for (j = N; j <= M; j++) {
                printf("%d ", j);
                sum += j;
            }
        } else {
            int j;
            for (j = M; j <= N; j++) {
                printf("%d ", j);
                sum += j;
            }
        }
        printf("Sum=%d\n", sum);
    }
    return 0;
}
