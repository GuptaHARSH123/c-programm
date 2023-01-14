// delete n number of elements.
#include<stdio.h>
int main()
{
    system("cls");
    int n;
    printf("enter the size of an array:- ");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements:- ");
    for(int i=0; i<n; i++)
    scanf("%d",&a[i]);
    int ne;
    printf("enter the number of elements which are to be deleted:- ");
    scanf("%d",&ne);
    for(int i=0; i<ne; i++)
    {
        printf("enter the position of number which is to be deleted:- ");
        int d;
        scanf("%d",&d);
        d=d-1;
        for(int i=d; i<(n-1); i++)
        {
            a[i]=a[i+1];
        }
    }
    printf("array after deletion is:- ");
    for(int i=0; i<(n-ne); i++)
    printf(" %d ",a[i]);
    return 0;
}