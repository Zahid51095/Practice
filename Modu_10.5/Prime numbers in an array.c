#include<stdio.h>
int main()
{
     int n,i,j,c=0,t=0,count=0;
     scanf("%d",&n);

     int ara[n];
     int prime[n];

    

     for(i=0;i<n;i++)
        scanf("%d",&ara[i]);

     for(i=0;i<n;i++)
     {
          c=0;
          for(j=2;j<ara[i];j++)
          {
               if(ara[i]%j==0)
               {
                    c=1;
                    break;
               }
          }
          if(c==0)
          {
               prime[t]=ara[i];
               t++;
               count++;
          }
     }

    printf("%d\n", count);
    
     for(i=0;i<t;i++)
     {
         
          printf("%d ",prime[i]);
     }
     return 0;
}