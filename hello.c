#include<stdio.h>
int main()
{
    int amount,tt,fh,oh,a,b,c;
    printf("enter amount:");
    scanf("%d",&amount);
    tt = amount/2000;
    a = amount%2000;
    fh = a/500;
    b = a%500;
    oh = b/100;
    c = amount/100;
    if(amount%500 == 0){
        printf("tt ,fh,oh = %d, %d, %d",tt,fh,oh);
        
    }
    else(amount%500 != 0)
     p
    
    return 0;


    
}