#include<stdio.h>
int main()
{
  char alphabet;
   
  
  printf("enter any alphabet :");
  scanf("%c",&alphabet);
  if(alphabet<='Z' && alphabet>='A')
  {
    printf("you enter upper case\n");
    printf("%c\n",alphabet);
  }
   else{
   printf("you enter lower case\n");
   printf("%c\n",alphabet);
   }

   return 0;
}


    
    
 
            





    
