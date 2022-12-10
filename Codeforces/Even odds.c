#include<stdio.h>
int main()
{
    int a,i,n;
    scanf("%d",&a);
    scanf("%d",&n);

    for (i = 1; i <= a; i++)
    {
       if (i % 2 != 0)
       {
          printf("%d ",i);
       }
     
    }

    for (i = 1; i <= a; i++)
    {
       if (i % 2 == 0)
       {
          printf("%d ",i);
       }
     
    }
    //  for (i = 1; i <= n; i++)
    // {
    //       printf("%d ",n);
       
     
    // }

    
    
   
    
    return 0;
}