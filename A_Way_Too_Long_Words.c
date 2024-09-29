#include <stdio.h>
#include <string.h>
int main()
{
    int n; 
    char word[1000];
    scanf("%d", &n);
    for (int i = 0; i < n+1; i++)
    {
        gets(word);
        if (strlen(word) <= 10)
        printf("%s\n", word);
        else if (strlen(word) > 10)
        {
            int no_of_letters = strlen(word);
            printf("%c%d%c\n", word[0], no_of_letters - 2, word[no_of_letters - 1]);
        }
    }
}