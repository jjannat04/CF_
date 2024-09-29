#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d", &t);
    long long n, k;
    for (int i = 0; i< t; i++)
    {
        scanf("%lld %lld", &n, &k);
        long long total = 0;
        for (int j = 1; j <= n; j++)
        {
            total += pow(j,j);
        }
        //printf("%lld\n", total);
        long long willfall = 0;
        for (int l = k; l < n; l++)
        {
            willfall += pow(l,l);
        }
        printf("%lld\n", (total-willfall));
    }
}