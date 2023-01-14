// program to print boundary elements.
#include<stdio.h>
int main()
{
    system("cls");
    int r,c;
    printf("enter the number of rows and columns:- ");
    scanf("%d %d",&r,&c);
    int a[r][c];
    printf("enter the elements:- ");
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        scanf("%d",&a[i][j]);
    }
    printf("now the boundary elements are:- \n");
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            if((i==0)||(i==(r-1))||(j==0)||(j==(c-1)))
            printf("%d ",a[i][j]);
            else
            printf("  ");
        }
        printf("\n");
    }
    return 0;
}