// program to check whether the number is even or odd without using if else condition.
// program for the use of short circuiting.
#include<stdio.h>
int main()
{
    system("cls");
    int a;
    printf("enter the number:- ");
    scanf("%d",&a);
    (a%2==0)&& printf("the number is even");
    (a%2!=0)&& printf("the number is odd");
    // (a%2==0)|| printf("the number is odd");
    return 0;
}