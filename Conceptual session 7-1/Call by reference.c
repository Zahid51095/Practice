#include<stdio.h>
int swap(int *ptr1, int *ptr2);
int main()
{
    int x = 10,y = 20;
    swap(&x,&y);
    printf("x = %d and y = %d",x,y);

    return 0;

}
int swap(int *ptr1,int *ptr2)
{
    *ptr1 = 20;
    *ptr2 = 10;
}