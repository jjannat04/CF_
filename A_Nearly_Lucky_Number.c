#include <stdio.h>

int main()
{
    long long n;
    scanf("%lld", &n);
    long long count = 0;
    while (n > 0)
    {
        long long rem = n % 10;
        n = n/10;
        if (rem == 4 || rem == 7)
        count++;
    }
    if (count == 4 || count == 7)
    printf("YES");
    else 
    printf("NO");
}