#include <stdio.h>

long long func(long long n);

int main() {
    long long n;
    scanf("%lld", &n);
    long long ans = func(n);
    printf("%lld\n", ans);
    return 0;
}

long long func(long long n) {
    if (n % 2 == 0) {
        return (n / 2);
    } else {
        return  -(n + 1) / 2;
    }
}
