/* #include<stdio.h>
int main()
{
    // code to check no. is pallandrum
    // logic is devide by 10
    int a,r,sum=0,t;
    printf("enter no:");
    scanf("%d",&a);
    t=a;
    while(a>0)
    {
        r=a%10;
         sum=sum*10+r;
         a=a/10;
    }
    if(t==sum)
    printf("no. is pallindrom");
    else
    printf("not");
    return 0;
}*/
// program to check no. is prime
/*#include<stdio.h>
int main()
{
    // to check no. is prime
    /*int n,a=0;
    printf("enter no:");
    scanf("%d",&n);
    for(int i =1; i<=n; i++)
    {
        if(n%i == 0)
        a=a+1;

    }
    if(a==2)
    printf("no is prime");
    else
    printf("no is not prime");
    return 0;
}*/
// code for find factorial of any number
/* #include<stdio.h>
int main()
{
    int n ,fact=1;
    printf("enter no:");
    scanf("%d",&n);
    for(int i =n; i>=1; i--)
    {
        fact = fact*i;
    }
    printf("%d",fact);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j =1;j<i;j++)
        printf(" ");
        for(int j=n;j>=i;j--)
        printf("*");
        printf("\n");
    }
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j =1;j<i;j++)
        printf(" ");
        for(int j=n;j>=i;j--)
        printf("* ");
        printf("\n");
    }
    return 0;

}*/

    
/*#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=(n-i);j++)
        printf(" ");
        for(int j=1; j<=i; j++)
        printf("* ");
        printf("\n");
    }
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int n;
    printf("enter no:");
    scanf("%d",&n);
    for(int i =1;i<=(n-1); i++)
    {
        for(int j=1;j<=(n-i); j++)
        printf(" ");
        for(int j=1;j<=i;j++)
        printf("* ");
        printf("\n");
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<i;j++)
        printf(" ");
        for(int j=n;j>=i;j--)
        printf("* ");
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int n;
    printf("enter no:");
    scanf("%d",&n);
    for(int i =1;i<=(n-1); i++)
    {
        for(int j=1;j<=(n-i); j++)
        printf(" ");
        for(int j=1;j<=i;j++)
        
        printf("* ");
        
    
        printf("\n");
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<i;j++)
        printf(" ");
        for(int j=n;j>=i;j--)
        
        printf("* ");
        
        
        printf("\n");
    }
    return 0;
}*/
#include<stdio.h>
int main()
{
    //code for armstrong no.
    int n,rem;
    printf("enter no.");
    scanf("%d",&n);
    int a=0;
    
    while(n>0)
    {
        rem=n%10;
        a++;
        n=n/10;
        
    }
    printf("%d",&a);
    return 0;
    
}

