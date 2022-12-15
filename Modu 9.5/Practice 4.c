
#include<stdio.h>
int main(){
     int n,i,j;
    scanf("%d",&n);
    int ara [n];
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&ara[i]);
        
    }

    for(int i=1;i<=n;i++){
            printf("%d-",i);
        for(int j=1;j<=n;j++){
            if(i!=j)
            printf("%d ",j);

        }
    printf("\n");

    }


}