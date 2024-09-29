#include <stdio.h>

long long rem(long long x, long long y);
int main()
{
    long long n, m, a;
    do 
    {
        scanf("%lld %lld %lld", &n, &m, &a);
    } while(n < 1 || m < 1 || a < 1 || a > 1e9);

    long long num1 = rem(n, a);
    long long num2 = rem(m, a);
    printf("%lld\n", num1 * num2);

    return 0;
}

long long rem(long long x, long long y)
{
    return (x + y - 1) / y;
}