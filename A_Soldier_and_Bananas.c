#include <stdio.h>

int main()
{
    int k, n, w;
    scanf("%d %d %d", &k, &n, &w);

    int total = 0;
    for (int i = 1; i <= w; i++)
    {
        total = total + (i*k);
    }
    if (total < n)
    printf("0");
    else 
    printf("%d", total - n);
}