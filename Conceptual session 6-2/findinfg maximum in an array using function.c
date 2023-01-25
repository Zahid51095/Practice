#include<stdio.h>
#include<limits.h>

void solve();

void input_array(int ara[], int size);

int get_max(int ara[], int size);

int main(void)
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        solve();
    }
    
}

void solve()
{
    int sz;
    scanf("%d", &sz);
    int num[sz];

    input_array(num,sz);

    int max = get_max(num, sz);

    printf("max number = %d\n", max);
}

void input_array(int ara[], int size)
{
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &ara[i]);
    }
    
}

int get_max(int ara[], int size)
{
    int max = INT_MIN;
    for (int  i = 0; i < size; i++)
    {
        if (max < ara[i])
        {
            max = ara[i];
        }
        
    }
    return max;
}