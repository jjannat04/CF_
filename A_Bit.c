#include <stdio.h>
#include <string.h>
int main()
{
    int n, x = 0;
    char opr[4];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", &opr);

        if (strcmp(opr, "X++") == 0 || strcmp(opr, "++X")==0)
        {
            x += 1;
        }
        else if (strcmp(opr, "X--") == 0 || strcmp(opr, "--X") == 0)
        {
            x -= 1;
        }
    }
    printf("%d", x);
}