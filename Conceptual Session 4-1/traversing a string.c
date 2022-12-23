#include<stdio.h>
#include<string.h>

int main()

{
    char sent[] = "phitron";

    int l = strlen(sent);
    
    for (int  i = 0; i < l; i++)
    {
        printf("%c ",sent[i]);
    }
    
    return 0;

}