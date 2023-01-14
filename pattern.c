#include<stdio.h>
int main()
{
   // to check number is prime
   int a,c,d=0;
   printf("write no:");
   scanf("%d",&a);
   for(int i =2; i<=(a-1); i++)
   {
    c=a%i==0;
    d=c+a;


   }
      
    
    
    return 0;
}