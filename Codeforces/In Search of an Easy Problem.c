#include<stdio.h>
int main()
{
    int a,i,x;
    scanf("%d",&a);
    for ( i = 1; i <= a; i++)
    {
        scanf("%d",&x);
        if (x == 0)
        {
            printf("EASY");
            return 0;
        }
        else if (x == 1)
        {
            printf("Hard");
            return 0;
        }
        
        
        
    }
    
    return 0;
}