//  C Program to delete an element in given array
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    scanf("%d",&a[i]);
    int ele;
    scanf("%d",&ele);
    int i;
    int t =0;
    for( i=0; i<n; i++)
    {
        if(a[i]==ele)
        t=i;
    }
    printf("%d",t);
    int p;
    p=t;
    printf("%d",i);
     for(int i=p; i<n; i++)
     {
        a[i]=a[i+1];
        
     }
     for(int j=0; j<n-1; j++)
     printf("%d,",a[i]);
return 0;
    
}