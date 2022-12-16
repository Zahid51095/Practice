#include<stdio.h>
int main()
{
    int n,i,ans;
    scanf("%d",&n);
    int ara [100];
    int e_c = 0, o_c = 0;
    for ( i = 1; i <= n; i++)
    {
        scanf("%d",&ara[i]);
        
    }
    for ( i = 1; i <= n; i++)
    {
        if (ara[i] % 2 == 0)
        {
            e_c++;
        }
        else
        {
            o_c++;
        }
        
    }
    if (e_c == 1)
    {
        for ( i = 1; i <= n; i++)
        {
            if (ara[i] % 2 == 0)
            {
                ans = i;
            }
            
        }
        
    }
    else
    {
         for ( i = 1; i <= n; i++)
        {
            if (ara[i] % 2 != 0)
            {
                ans = i;
            }
            
        }

    }
    printf("%d",ans);


    return 0;
    
}