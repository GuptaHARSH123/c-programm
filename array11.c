// program to insert an element.
#include<stdio.h>
int main()
{
    system("cls");
    int n;
    printf("enter the size of an element:- ");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements:- ");
    for(int i=0; i<n; i++)
    scanf("%d",&a[i]);
    n=n+1;
    int p;
    printf("enter the position of number:- ");
    scanf("%d",&p);
    p=p-1;
    int i;
    printf("enter the number which is to be inserted:- ");
    scanf("%d",&i);
    for(int i=(n-1); i>p; i--)
    {
        a[i]=a[i-1];
    }
    a[p]=i;
    printf("now the array after insertion:- ");
    for(int x=0; x<n; x++)
    printf(" %d ",a[x]);
    return 0;
}