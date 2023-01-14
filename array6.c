// take times of rotation from user and rotate accordingly.
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
    int r;
    printf("enter the times you want rotation:- ");
    scanf("%d",&r);
    for(int i=1; i<=r; i++)
    {
        int t=a[0];
        for(int i=0; i<n; i++)
        {
            a[i]=a[i+1];
        }
        a[n-1]=t;
        for(int i=0; i<n; i++)
        printf(" %d ",a[i]);
        printf("\n");
    }
    return 0;
}