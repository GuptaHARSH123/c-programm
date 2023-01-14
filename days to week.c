#include<stdio.h>
int main()
{
    int days, weeks,years,a,b ;
    printf("write no. of days");
    scanf("%d",&days);
    years = days/365;
    a = days%365;
    weeks = a/7;
    b = weeks % 7;
    days = b % 7;
    printf("years,weeks,days = %d,%d,%d",years,weeks,days);




    return 0;
}