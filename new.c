#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i< t; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        int total = 4*(b-a)+6+10+4*b;
        printf("%d", total);
    }
}