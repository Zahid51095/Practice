#include<stdio.h>

void take_input_in_an_array(int num_arr[], int sz);

void print_array(int num_arr[], int sz);

int main()
{
    int size;
    scanf("%d", &size);

    int num[size];
    take_input_in_an_array(num,size);
    print_array(num,size); 
    return 0;
}


void take_input_in_an_array(int num_arr[], int sz)
{
    for (int i = 0; i < sz; i++)
    {
        scanf("%d", &num_arr[i]);
    }
    
}

void print_array(int num_arr[], int sz)
{
    for (int i = 0; i < sz; i++)
    {
        printf("%d ", num_arr[i]*2);
    }
    
}