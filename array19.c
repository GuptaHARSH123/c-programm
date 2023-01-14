// 1 2 3 4                1 2 3 4
// 5 6 7 8                8 7 6 5
// 9 1 2 3      -->       9 1 2 3
// 4 5 9 1                1 9 5 4
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
    {
        for(int j=0; j<n; j++)
        scanf("%d",&a[i][j]);
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n/2; j++)
        {
            if(i%2!=0)
            {
                int temp=a[i][j];
                a[i][j]=a[i][n-j-1];
                a[i][n-j-1]=temp;
            }
        }
    }
    printf("zigzag array is:- \n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}