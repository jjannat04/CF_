#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    int str1[100], str2[100];
    gets(str1);
    gets(str2);
    int sum1 = 0, sum2 = 0;
    for(int i = 0; i < strlen(str1); i++)
    {
        str1[i] = tolower(str1[i]);
        int  a = str1[i] - '0';
        sum1 += a;
    }
    for(int i = 0; i < strlen(str2); i++)
    {
        str2[i] = tolower(str2[i]);
        int  a = str2[i] - '0';
        sum2 += a;
    }

    if (sum1 > sum2)
    printf("1");
    else if (sum1 < sum2)
    printf("-1");
    else 
    printf("0");
    
}