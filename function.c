/*#include<stdio.h>
void totalbill(int a)
{
    float  t;
    t = (a*120)/100;
     t = (t*115)/100;
    printf("total bill is 2%f",t);

}
int main()
{
    int x;
    printf("write amount of mill");
    scanf("%d",&x);
    totalbill(x);

    return 0;
}
#include<stdio.h>
int root(int a,int b,int c)
{
    int d;
    d = (b*b)-(4*a*c);
     if(d>=0)
     return 1;
     if(d<0)
     return 0;
}
int main()
{
    int x,y,z;
 
 scanf("%d",&x);
 scanf("%d",&y);
 scanf("%d",&z);

if(root(x,y,z))
printf("real");
else
printf("imagnary");

return 0;
}



#include<stdio.h>

void  factorial( )
{
    int a;
    printf("write no:");
    scanf("%d",&a);
    int f=1;
    for(int i=a; i>=1; i--)
    {
       f=f*i;
    }
     printf("%d",f);

}

int main()
{
    factorial( );
    return 0;
}
     
*/
#include<stdio.h>
int palin(int a)
{
    int sum =0;
    int f;
    f=a;
    int r;
    while(a>0)
    {
        r=a%10;
        sum = (sum*10)+r;
        a = a/10;
    }
    if(f==sum)
    return 1;
    else
    return 0;
}
int prime(int b)
{
    int t =0;
    for(int i=1; i=<b; i++)
    {
        if(b%i==0)
        t++;
    }
    if(t==2)
    return =1;
    else
    return 0;
}

int palprime(int k)
{
    int t;
     t =prime(k)
    int u;
    u= palin(k)
    if(t+u == 2)
    return 1;
    else
    return 0;
}
int main()
{
    int n;
    printf("write no:");
    scanf("%d",&n);
    int k;
    k = palprime(n);
    return 0;
}



























