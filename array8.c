// program to find the frequencies of each element.
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
    printf("the frequencies of the elements are:- \n");
    for(int i=0; i<n; i++)
    {
        int c=0;
        for(int j=0; j<n; j++)
        {
            if(a[i]==a[j])
            c++;
        }
        int z=0;
        for(int k=(i-1); k>=0; k--)
        {
            if(a[i]==a[k])
            z++;
        }
        if(z!=0)
        continue;
        else
        printf("the frequency of %d is:- %d\n",a[i],c);
    }
    return 0;
}