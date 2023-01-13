#include<stdio.h>
int main()
{
    //print number 0 to n if number is given by user
    int n;
    printf("enter number:");
    scanf("%d",&n);
     for(int i = n; i <=10*n; i = i+n )
     {
        printf("%d\n",i);
     }
    
    
    return 0;
}