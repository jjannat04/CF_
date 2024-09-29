#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    char str[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%c", &str[i]);
    }

    int counta=0, countd= 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'A')
        counta++;
        else if (str[i] == 'D')
        countd++;
    }
    printf("%d %d", counta, countd);
    if (counta > countd)
    printf("Anton");
    else if (countd > counta)
    printf("Danik");
    else 
    printf("Friendship");
}