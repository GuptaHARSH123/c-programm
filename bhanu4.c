// program to get the understanding of '%.1f' format specifier.
#include<stdio.h>
int main()
{
    system("cls");
    float a,b,c;
    printf("enter the number a:- ");
    scanf("%f",&a);
    printf("enter the number b:- ");
    scanf("%f",&b);
    c=a+b;
    printf("%.1f",c); // will print only 1 number after decimal.
    return 0;
}