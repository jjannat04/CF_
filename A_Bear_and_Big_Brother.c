#include <stdio.h>

int main()
{
    int limak, bob;
    scanf("%d %d", &limak, &bob);

    int year = 0;
    while(limak <= bob)
    {
        limak *= 3;
        bob *= 2;
        year ++;
    }
    printf("%d", year);
}