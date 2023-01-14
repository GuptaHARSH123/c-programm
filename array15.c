// program to merge two arrays.
#include<stdio.h>
int main()
{
    system("cls");
    int n1; 
    printf("enter the size of 1st array:- ");
    scanf("%d",&n1);
    int a[n1];
    printf("enter the elements of 1st array:- ");
    for(int i=0; i<n1; i++)
    scanf("%d",&a[i]);
    int n2;
    printf("enter the size of 2nd array:- ");
    scanf("%d",&n2);
    int b[n2];
    printf("enter the elements of 2nd array:- ");
    for(int i=0; i<n2; i++)
    scanf("%d",&b[i]);
    int n3;
    n3=n1+n2;
    int c[n3];
    for(int i=0; i<n1; i++)
    c[i]=a[i];
    for(int i=n1; i<n3; i++)
    c[i]=b[i-n1];
    printf("array after merging is:- ");
    for(int i=0; i<n3; i++)
    printf("%d ",c[i]);
    return 0;
}