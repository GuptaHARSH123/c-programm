#include<stdio.h>
int main ()
{
    int number ;
    printf("enter number (0 -100):");
    scanf("%d",&number);
    if (number<30)
    {
        printf("you are fail\n");
        printf("yor grade is C\n");
    }
    else if (number>=30&&number<=50)
    {
         printf("you are poass\n ");
         printf("your grade is \nB") ;
    }
    else if(number>50&&number<=90)
    {
        printf("you are pass\n");
        printf("yor grade is A\n");

    }
    else 
    {
        printf("you are pass\n");
        printf("your grade is A+\n");
    }
    return 0;
}










    

    

    

    
    

    