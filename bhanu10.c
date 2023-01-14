// swapping without using if else and without using third variable only with bitwise xor operator.
#include<stdio.h>
int main()
{
    system("cls");
    int a,b;
    printf("enter the number a:- ");
    scanf("%d",&a);
    printf("enter the number b:- ");
    scanf("%d",&b);
    printf("the value of a is %d\nthe value of b is %d\n",a,b);
    a= a^b;
    b= a^b;
    a= a^b;
    printf("now the value of a is %d and the value of b is %d",a,b);
    return 0;
}

