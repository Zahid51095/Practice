#include<stdio.h>
int main() 
{
   long long n,k,j,i; 
   scanf("%lld%lld",&n,&k); 
   if(n%2==0) 
      j=n/2; 
   else 
      j=n/2+1; 
   if(k<=j) 
      i=(k*2)-1; 
   else 
      i=(k-j)*2; 

   printf("%lld\n",i); 
   
   return 0;
   
}