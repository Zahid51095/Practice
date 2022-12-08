#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    for ( int i = n; i <= m; i++)
    {
        {
            printf("%d ",i);
            
        }   
        
    }
            
    for ( int i = n; i >= m; i++)
    {
        {
            printf("%d ",i);
            if (i == 23)
            {
                break;
            }
            
            
        }   
    }
    for ( int i = 0; i <= m; i++)
    {
       printf("%d ",i);
    }
    
    
    
    return 0;
}