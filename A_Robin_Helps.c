#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    int n, k;
    
    for (int i = 0; i < t; i++)
    {
        int count = 0, robin = 0;
        scanf("%d %d", &n, &k);
        int arr[n];
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[j]);
            if (arr[j] >= k)
            robin += arr[j];

            else if (arr[j] == 0 && robin > 0)
            {
                count++;
                robin--;
            }
        }
         printf("%d\n", count);


    }
}