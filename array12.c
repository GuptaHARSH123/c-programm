// insert n number of elements in an array.
#include <stdio.h>
int main()
{
    system("cls");
    int n;
    printf("enter the size of array:- ");
    scanf("%d", &n);
    int a[n];
    printf("enter the elements:- ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int hm;
    printf("number of elements which are to be inserted:- ");
    scanf("%d", &hm);
    for (int i = 0; i < hm; i++)
    {
        n++;
        int p;
        printf("enter the position:- ");
        scanf("%d", &p);
        p = p - 1;
        int ie;
        printf("enter the element which is to be inserted:- ");
        scanf("%d", &ie);
        for (int i = n; i > p; i--)
            a[i] = a[i - 1];
        a[p] = ie;
        printf("now the array is:- ");
        for (int j = 0; j < n; j++)
            printf("%d ", a[j]);
        printf("\n");
    }
    return 0;
}