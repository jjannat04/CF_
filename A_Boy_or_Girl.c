#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    gets(name);
    int len = strlen(name);
    int count = 1;
    char element = name[0];
    printf("%c\n", element);
    for (int i = 0; i < len; i++)
    {
        if(name[i] != element){
        element = name[i];
        printf("%c\n", element);
        count++;
        }
    }    
    
    if (count%2==0)
    printf("CHAT WITH HER!");
    else 
    printf("IGNORE HIM!");

}

