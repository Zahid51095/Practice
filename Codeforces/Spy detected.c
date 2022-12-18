#include<stdio.h>
int main()
{
   int j,t;
   scanf("%d",&t);
   for ( j = 1; j <= t; j+=1)
   {
        int n,i,max=101;
        scanf("%d",&n);
        int input[n+1];
        for ( i = 1; i <= n; i+=1)
        {
            scanf("%d", &input[i]);
        }
        int ara[max];

        for (i = 0; i < max; i+=1)
        {
            ara[i] = 0;
        }
        
        for ( i = 1; i <= n; i+=1)
        {
            ara[input[i]] += 1;
        }
        int index;

        for ( i = 1; i <= n; i+=1)
        {
            if (ara[input[i]] == 1)
            {
                index = i;
                break;

            }
            
        }

        printf("%d\n",index);
        
    }
    
        
    return 0;
}