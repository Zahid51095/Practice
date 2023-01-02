#include<stdio.h>
#include<string.h>

int main()

{
    char name[100];
    scanf("%s",name);

    int n = strlen(name);

    if (n % 2 == 0)
    {
        printf("CHAT WITH HER!\n");
    }
    else 
    {
        printf("IGNORE HIM!");
    }
    
    
    return 0;
}