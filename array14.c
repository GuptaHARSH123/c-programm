// bubble sort ascending order.
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
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            if(a[i]>a[j])
            {
                int t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    printf("the array in ascending order is:- ");
    for(int i=0; i<n; i++)
    printf(" %d ",a[i]);
    return 0;
}