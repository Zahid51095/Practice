#include<stdio.h>
int main()
{


    char name[] = "Zahid  Hasan";

    name[5] = 'a';
    name[12] = '\0';

    printf("%s", name);

    return 0;

}