// find position of an element.
#include<stdio.h>
int main()
{
    system("cls");
    int n;
    printf("enter the size of array:- ");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements:- ");
    for(int i=0; i<n; i++)
    scanf("%d",&a[i]);
    int e,c=0;
    printf("enter the element of which you have to find the position:- ");
    scanf("%d",&e);
    for(int i=0; i<n; i++)
    {
        if(a[i]==e)
        {
        printf(" %d ",(i+1));
        c++;
        }
    }
    if(c==0)
    printf("not found");
    return 0;
}