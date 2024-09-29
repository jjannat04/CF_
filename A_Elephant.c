#include <stdio.h>

int main()
{
    double x;
    scanf("%lf", &x);
    int count = 0;

    for (double i = 5; i >= 1; i--)
    {
        
        while (x != 0 && x >= i)
        {
            x = x - i;
            count++;
        }
        if (x >= i)
        i++;
    }
    printf("%d", count);
}