#include <stdio.h>
#include <string.h>
int main()
{
    char arr[100];
    gets(arr);
    int length = strlen(arr);
    if (arr[length - 1] == '\n') 
    { 
        arr[length - 1] = '\0';
        length--;
    }
    int count = 0;
    
    int numbers[length/2 + 1];
    for (int i = 0; i < length; i += 2) {
        if (arr[i] == '1')
            numbers[count++] = 1;
        else if (arr[i] == '2')
            numbers[count++] = 2;
        else if (arr[i] == '3')
            numbers[count++] = 3;
    }
     for (int j = (count - 1); j > 0; j--)
    {
        for (int i = 0; i < j; i++)
        {
            if (numbers[i] > numbers[i+1])
            {
            int x = numbers[i];
            numbers[i] = numbers[i+1];
            numbers[i+1] = x;
            }
        }
    }
    for (int i = 0; i < count; i++) {
        if (i != 0) {
            printf("+");
        }
        printf("%d", numbers[i]);
    }
    printf("\n");
    

}