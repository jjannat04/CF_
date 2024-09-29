#include <stdio.h>
#include <math.h>
int main()
{
    int arr[5][5];
    int r, c;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            scanf("%d", &arr[i][j]);
            if (arr[i][j] == 1)
            {
                r = i;
                c = j;
            }
        }
    }
    printf("%d", (abs(r-3)+abs(c-3)));

}