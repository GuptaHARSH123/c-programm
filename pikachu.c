#include<stdio.h>
int main()
{
   int n,a=1,sum=0;
   printf("enter n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++ )
    {
      if(i%2 !=0)
      {
         for(int j=1;j<=3;j++)
         a=a*i;
      
      sum=sum+a;
      }
      
    }

   printf("%d\n",sum);
   printf("%d\n",a);
   return 0;
}
/*#include<stdio.h>
int main()
{
   int n,a=1;
   scanf("%d",&n);
   for(int i=1;i<=3;i++)
  { a=a*n;
  }
  printf("%d",a);
}*/