#include<stdio.h>
#include<string.h>

void nosto_keyboard(char str[])
{
    int i, j, len = strlen(str);
    for(i=0, j=0; i<len; i++, j++)
    {
        if(j%2 == 0)
        {
            printf("%c", str[i]);
        }
        else
        {
            printf("%c%c", str[i], str[i]);
        }
    }
}

int main()
{
    char str[100];
    scanf("%s", str);
    nosto_keyboard(str);
    return 0;
}