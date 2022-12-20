#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int ara[n];
    int sum  = 0;

    for ( i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }

    for ( i = 0; i < n; i++)
    {
        if (ara[i] %2 != 0)
        {
           sum = sum + ara[i];
        }
        
    }

    if (sum % 2 == 0)
       {
        printf("Yes");
       }
    else
       {
        printf("No");
       }
  
     
    return 0;

}