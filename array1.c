#include<stdio.h>
#define N 10  //--> we can define a macro to assign the size of an array.
int main()
{
    system("cls");
    int arr[N]={0,1,2,3,4,5};
    for(int i=0; i<N; i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}

/*
int a[5] --> now the size of this 'a' is 5*4=20; because this variable 'a' now contains 5 integers.
*/
/*
int a[10]={[0]=1, [5]=2, [9]=3}; --> designated initialization of array.
*/