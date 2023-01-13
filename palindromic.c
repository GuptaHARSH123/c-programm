// program to find palindromic number
#include<stdio.h>
int main()
{
   int a,b=0,r,t;
   printf("enter any number:");
   scanf("%d",&a);
   a=t;
   while (a>0)
   {
      r = a%10;
      b = (b*10)+r;
      a = a/10;
   }
    if (t==b)
      printf("palindromic");
    else
    printf("not");

    return 0;
}