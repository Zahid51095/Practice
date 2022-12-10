#include<stdio.h>
int main()
{
    int a,b,i,x,t=0;
    scanf("%d %d",&a,&b);
    for ( i = 1; i <= a; i++)
    {
        scanf("%d", &x);
        if (x > b)
        {
           t += 2;
        }
        else
        {

            t++;
        }
        
    }
    printf("%d",t);
    
    return 0;
}