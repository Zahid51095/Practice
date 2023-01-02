#include<stdio.h>
#include<string.h>

int main()

{
    int i,j;
    char sent[100];
    scanf("%s",sent);
    int n = strlen(sent);
    int flag = 1;
    for ( i = 0; i < n; i++)
    {
        if (sent[i] >= 'a' && sent[i] <= 'z' || sent[i] >= 'A' && sent[i] <= 'Z' )
        {
            flag=0;
            break;
        }
       
        
    }
    
    if (flag==1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO");

    }
    
    
    return 0;
}