#include<stdio.h>
int main()
{
    int N ;
    int ara [100];
    int i;
    scanf("%d", &N);
    for ( i = 0; i < N; i++)
    {
        scanf("%d",&ara[i]);
    }

    int e_c = 0, o_c = 0;

    for ( i = 0; i < N; i++)
    {
        if (ara[i] % 2 ==  0)
        {
            e_c ++;
        }
        if (ara[i] % 2 !=  0)
        {
            o_c ++;
        }
        
        
    }

    printf("The Number of Even numbers is %d\n", e_c);

    printf("The Number of Odd numbers is %d", o_c);

    

    return 0 ;
}