// program to get the understanding of unary operators.
#include<stdio.h>
int main()
{
    system("cls");
    int a=10, b,c;
    a++;
    printf("now the value of a is:- %d\n",a); // a=11;
    ++a;
    printf("now the value of a is:- %d\n",a); // a=12;
    b=++a;
    printf("now the value of b is:- %d\n",b); // b=13;
    printf("now the value of a is:- %d\n",a); // a=13;
    c=a++;
    printf("now the value of c is:- %d\n",c); // c=13;
    printf("now the value of a is:- %d\n",a); // a=14;
    return 0;
}