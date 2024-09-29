#include <stdio.h>
#include <string.h>
#include <ctype.h>
void small(char str[])
{
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        str[i] = tolower(str[i]);
    }
}
void cap(char str[])
{
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        str[i] = toupper(str[i]);
    }
}
int main()
{
    char str[100];
    gets(str);

    int len = strlen(str);
    int countlower = 0, countupper = 0;
    for (int i = 0; i < len; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        countlower++;

        else if (str[i] >= 'A' && str[i] <= 'Z')
        countupper++;
    }

    if (countlower > countupper || countlower == countupper)
    {
        small(str);
        puts(str);
    }
    else if (countupper > countlower)
    {
        cap(str);
        puts(str);
    }
    
    
}