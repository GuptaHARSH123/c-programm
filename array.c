/* #include<stdio.h>
 int main()
 {
      d",& x[i]);
     }int n;
      printf("size of ARRAY:");
      scanf("%d",&n);
      int x[n];
      for(int i =0; i<n; i++)
     { printf("write %d element",i+1);
      scanf("%
      int sum =0;
     for(int i=0; i<n; i++)
     {
      sum =sum+ x[i];
     }
     printf("sum of array is %d\n",sum);
     float av;
     av =(float)sum/n;
     printf("average: %f",av);
     return 0;
 }*/

//code for reverse an array
/* # include<stdio.h>
 int main()
 {
    
      int n;
      printf("size of ARRAY:");
      scanf("%d",&n);
      int x[n];
      for(int i =0; i<n; i++)
     { printf("write %d element",i+1);
      scanf("%d",& x[i]);
     }
     int t;
     for(int i=0;i<n/2;i++)
     {
      t=x[i];
      x[i]=x[n-i-1];
      x[n-i-1]=t; 
       
     }
      for(int i=0;i<n;i++)
     printf("%d\n",x[i]);

     return 0;
 }*/
 // program to count positive negative and neutral
 #include<stdio.h>
 int main()
 {
int n;
      printf("size of ARRAY:");
      scanf("%d",&n);
      int x[n];
      for(int i =0; i<n; i++)
     { printf("write %d element",i+1);
      scanf("%d",& x[i]);
     }
     int p=0,N=0,z=0;
     for(int i=0;i<n;i++)
     {
      if(x[i]>0)
      p++;
      if(x[i]<0)
      N++;
      if(x[i]==0)
      z++;
     }
     printf("no. of positive integer is %d\n ",p);
      printf("no. of negtive integer is %d\n ",N);
       printf("no. of zero integer is %d\n ",z);
       return 0;
 }