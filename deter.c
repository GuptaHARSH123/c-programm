#include<stdio.h>
int main()
{
    
     
     
    int a[3][3];
    for(int i=0; i<3;i++)
    {
        for(int j=0;j<3 ;j++)
       { printf("ENTER %d*%d ELEEMENT",i+1,j+1);
        scanf("%d",& a[i][j]);
       }
    }   

for(int i=0; i<3; i++)
{
    for(int j =0; j<3; j++)
    printf("%d ",a[i][j]);

printf("\n");
}
int d;
d = a[0][0] * ((a[1][1]*a[2][2]) - (a[2][1]*a[1][2])) -a[0][1] * (a[1][0]
   * a[2][2] - a[2][0] * a[1][2]) + a[0][2] * (a[1][0] * a[2][1] - a[2][0] * a[1][1]);
 
  printf("\nDeterminant of 3X3 matrix: %ld", d);
  return 0;
}
 



















































 
  
  
 
