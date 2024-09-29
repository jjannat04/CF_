#include <stdio.h>
void swap(int *a, int *b);

int main()
{
    int n, k;
    scanf("%d%d", &n, &k);
    int arr[n];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] < arr[j+1])
            {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= 0)
        continue;
            if (arr[i] >= arr[k-1])
            count++;
        
    }
    printf("%d", count);
    
}

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}