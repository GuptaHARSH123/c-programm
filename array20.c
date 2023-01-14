// program to print lower triangular matrix.
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
    printf("now the lower triangle matrix is:- \n");
    for(int i=0; i<n;  i++)
    {                             // Logic:- if column index > row index then put zero.
    for(int j=0; j<n; j++)        // Logic for upper triangle matrix is reverse.
    {
    if(j>i)
    a[i][j]=0;
    printf("%d ",a[i][j]);
    }
    printf("\n");
    }
    return 0;
}