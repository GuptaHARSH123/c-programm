// Program to check whether the no. is palindrome or not.
#include<stdio.h>
int main()
{
    system("cls");
    int a,b=0,r,t;
    scanf("%d",&a);
    t=a;
    while(a>0)
    {
        r=a%10;
        b=(b*10)+r;
        a=a/10;
    }
    if(t==b)
    printf("palindrome");
    else
    printf("not palindrome");
}