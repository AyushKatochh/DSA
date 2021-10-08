/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int num;
   
   printf("enter number\n");
   scanf("%d",&num);
   
   if(num%5==0 && num%8==0)
   {
       printf("number divisible by both");
   }
   
       else if(num%5==0)
       {
           printf("number divisible by 5 only");
       }
       
           else if(num%8==0)
           {
               printf("number divisible by 8 only");
           }
           
              else 
                  
              {
                  printf("number divisible by none");
              }
   return 0;
}

