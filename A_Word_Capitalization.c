#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str[1000];
    gets(str);

    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (i == 0)
        {
            str[i] = toupper(str[i]);
        }
        
        printf("%c", str[i]);
    }
}