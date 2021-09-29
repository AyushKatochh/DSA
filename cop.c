/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int x = 5;
   int y= 2;
   
   int z;
   
   z = x & y; // bitwise and
   printf("result of & = %d\n",z);
   
   z = x | y; //bitwise or
   
   printf("result of | = %d\n", z);
   
   z = x >> 2;
   printf("result of >> = %d\n",z);
   
   z = ~x;
   printf("result of ~ = %d\n", z);

    return 0;
}
