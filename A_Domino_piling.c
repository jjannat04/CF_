#include <stdio.h>

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);

    int mult = m * n ;
    if (mult % 2 == 0)
    {
        printf("%d", mult/2);
    }
    else 
    {
        printf("%d", (mult - 1)/ 2);
    }
}