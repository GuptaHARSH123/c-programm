// power function.
#include<stdio.h>
#include<math.h>
int main()
{
    system("cls");
    float x,y;
    printf("enter the number x:- ");
    scanf("%f",&x);
    printf("enter the number y:- ");
    scanf("%f",&y);
    float z= pow(x,y);
    printf("result:- %f",z);
    return 0;
}