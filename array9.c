// program to delete an element from the array.
#include<stdio.h>
int main()
{
    system("cls");
    int n;
    printf("enter the size of array:- ");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements:- ");
    for(int i=0; i<n; i++)
    scanf("%d",&a[i]);
    int p;
    printf("enter the position of the number which you have to delete:- ");
    scanf("%d",&p);
    p=p-1;
    if(p<n)
    {
    for(int i=p; i<(n-1); i++)
    {
        a[i]=a[i+1];
    }
    printf("array after deletion:- ");
    for(int i=0; i<(n-1); i++)
    printf(" %d ",a[i]);
    }
    else
    printf("size of array is limited.");
    return 0;
}