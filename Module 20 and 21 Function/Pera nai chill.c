#include <stdio.h>



int myfriend(int x)       //The variables that are defined when the function is declared are known as parameters. x hocce parameter.            

{
    printf("Pera nai chill!\n");
    return 2*x;
}

int main()
{
    int a,b;
    // The values that are declared within a function when the function is called are known as an argument. 5 hocce argument.
    a = myfriend(5); 
    printf("%d\n", a);

    b = myfriend(10);
    printf("%d\n", b);
    return 0;
}

