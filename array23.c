// enter the element and delete all occurrences of that element.
#include<stdio.h>
int main()
{
    system("cls");
    int n,e;
    printf("enter the size of array:- ");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements:- ");
    for(int i=0; i<n; i++)
    scanf("%d",&a[i]);
    printf("enter the element of which you have to dlt occurrences:- ");
    scanf("%d",&e);
    int i=0;
    while(i<n)
    {
        if(a[i]==e)
        {
            for(int j=i; j<n-1; j++)
            a[j]=a[j+1];
            n--;
            i--;
        }
        i++;
    }
    printf("array after deletion is:- ");
    for(int i=0; i<n; i++)
    printf("%d ",a[i]);
    return 0;
}