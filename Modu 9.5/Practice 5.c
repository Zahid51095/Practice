
#include<stdio.h>
int main(){
     int n,i,j;
    scanf("%d",&n);
    int ara [n];
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&ara[i]);
        
    }
    int  a;
    int count = 0;
    scanf("%d",&a);
    for ( i = 0; i < n; i++)
      {
        if (ara[i] + ara [i+1] == a)
       count++;
      }
      if (count == 1)
      {
        printf("YES");
      }
      else
      {
        printf("NO");
      }
      
      return 0;
      
  

}