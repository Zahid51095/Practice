#include<stdio.h>
#include<string.h>
int main()
{
    char sent[100];
    scanf("%s",sent);
    int i;
    int n = strlen(sent);
    int flag = 0;

    for ( i = 0; i < n; i++)
    {
        if (sent[i] != sent[n-i-1])
        {
            flag = 1;
            break;
        }
        
    }

    if (flag == 1)
    {
        printf("No\n");
    }
    else
    {
        printf("Yes\n");

    }
    
    


    return 0;
}