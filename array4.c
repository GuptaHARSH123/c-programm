// program to reverse the elements of array.
#include<stdio.h>
int main()
{
    system("cls");
    int n,t;
    printf("enter the size of array:- ");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements:- ");
    for(int i=0; i<n; i++)
    scanf("%d",&a[i]);
    for(int i=1; i<=(n/2); i++)
    {
        t=a[i-1];
        a[i-1]=a[n-i];
        a[n-i]=t;
    }
    printf("the reversed array is:- ");
    for(int i=0; i<n; i++)
    printf(" %d ",a[i]);
    return 0;
}