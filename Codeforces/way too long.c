#include<stdio.h>
#include<string.h>

int main()
{
    int t;

    char sen[100];

    scanf("%d ",&t);

    for ( int i = 1; i <= t; i+=1)
    {
     
        scanf("%s",&sen);
        int l = strlen(sen);
        if (l > 10)
        {
            printf("%c%d%c\n",sen[0],l-2,sen[l-1]);
        }
        else
        {
            printf("%s\n",sen);
        }
        
        
    }
    
    return 0;
}