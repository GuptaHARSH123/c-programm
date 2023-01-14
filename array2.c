#include<stdio.h>
int main()
{
    system("cls");
    int a[10]={1,7,5,[5]=89,34,[8]=24}; // another way to initialize an array.
    for(int i=0; i<10; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}