// program to print only diagonal elements of a matrix.
#include<stdio.h>
int main()
{
    system("cls");
    int n;
    printf("enter the size of array:- ");
    scanf("%d",&n);
    int a[n][n];
    printf("enter the elements:- ");
    for(int i=0; i<n; i++)
    for(int j=0; j<n; j++)
    scanf("%d",&a[i][j]);
    printf("the diagonals are:- \n");
    for(int i=0; i<n; i++)
    {
    for(int j=0; j<n; j++)
    {
        if((i==j)||(i+j==(n-1)))
            {
        printf("%d",a[i][j]);
            }
        else
        printf(" ");
    }
    printf("\n");
    }
    return 0;
}