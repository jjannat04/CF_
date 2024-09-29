#include <stdio.h>
int distinct(int i);
int main()
{
    int year;
    scanf("%d", &year);

    for (int i = year+1; i <= 9012; i++)
    {
        int x = distinct(i);
        if (x == 0)
        {
            continue;
        }
        else
        {
            printf("%d", i);
            break;
        }

    }
}
int distinct(int i)
{
    int x = 0;
    int a, b, c,d;
    a = i % 10;        
    b = (i / 10) % 10; 
    c = (i / 100) % 10; 
    d = (i / 1000) % 10;

    if(a != b && a != c && a != d && b != c && b  != d && c != d)
    {
        x = 1;
    }
    return x;
}