#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[n]);
    }
    int s;
    printf("Enter S: ");
    scanf("%d", &s);

    int first = 0, second = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; i < n-1; j++)
        {
            sum += arr[j];

            if (sum == s)
            {
                first = i;
                second = j;
            }
        }
    }
    if (sum == 0)
    printf("-1");
    else 
    printf("The sum of elements from %d to %d is %d", first, second, s);
}