#include<stdio.h>
#include<string.h>

int main()

{
    char sent[] = "phitron";
    int i;
    int l = strlen(sent);
    for ( i = l-1; i >= 0; i--)
    {
        printf("%c",sent[i]);
    }
    
    return 0;
}
