#include<stdio.h>
int main()
{
    int i,j;
    float n;
    for ( i = 1; i <= 10; i++)
    {
        float sum = 0;
        printf("Enter the marks of %d student : ",i);
        for ( j = 0; j < 3; j++)
        {
            scanf("%f",&n);
            sum += n;
        }
        float avg = sum/3;
        printf("The average mark is %f\n",avg);
        
    }
    
    return 0;

}