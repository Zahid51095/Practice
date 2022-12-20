#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int array[n];
    for(int i=0; i<n; i++)
       { 
        scanf("%d",&array[i]);
       }
 
    int max=array[0];
 
    for(int i=1; i<n; i++)
       {
         if(array[i]>max)
            max=array[i];
       }
 
    int unique[max+1];
 
    for(int i=0; i<=max; i++)
      {
          unique[i]=-1;
      }
 
    for(int i=0; i<n; i++)
    {
        if(unique[array[i]]==-1)
            unique[array[i]]=1;
    }
 
    for(int i=0; i<=max; i++)
    {
        if(unique[i]!=-1)
            printf("%d ",i);
    }
    return 0;
}
 