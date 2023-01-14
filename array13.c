// delete duplicacies of each element.
#include<stdio.h>
int main()
{
    system("cls");
    int n,c=0;
    printf("enter the size of array:- ");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements:- ");
    for(int i=0; i<n; i++)
    scanf("%d",&a[i]);
    for(int i=0; i<n; i++)
    {
        for(int j=(i+1); j<n; j++)  // program is not working well when i put n=6 or 10;
        {                           // and enter the elements = 1 2 3 1 2 3
            if(a[i]==a[j])          // program is not working well only because of the value of c
            {
                c++;
                for(int k=j; k<n; k++)
                    a[k]=a[k+1];
            }
        }
    }
    printf("array after deletion of duplicacies:- ");
    for(int i=0; i<=(n-c+2); i++)
    printf("%d ",a[i]);
    return 0;
}