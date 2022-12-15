#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int ara [n];
    int count = 0;
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&ara[i]);
        
    }
    int test =  ara[0];
    for ( i = 0; i < n; i++)
    {
        if (test == ara[i])
        {
            count ++;
        }
        
    }
    
    if (count == n)
    {
        printf("YES");
    }
    else
    {
        printf("No");

    }
    
    
  

    return 0;
}