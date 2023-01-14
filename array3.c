// program to find the greatest and smallest no. in the given array.
#include<stdio.h>
int main()
{
    system("cls");
    int n;
    printf("enter the size of array:- ");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of array:- ");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int max=a[0],min=a[0];
    for(int i=0; i<n; i++)
    {
        if(max<a[i])
        max=a[i];
        if(min>a[i])
        min=a[i];
    }
    printf("the greatest element is:- %d\n",max);
    printf("the smallest element is:- %d",min);
    return 0;
}