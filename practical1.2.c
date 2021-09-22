/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>		//header file

void
main ()
{
 float distance,kilo,metre,feet,centimetre;
 
 printf("The distance between two cities is :");
 scanf("%f", &distance);
 
 kilo = distance;
 metre = kilo* 1000;
 feet = kilo * 3280.84;
 centimetre = kilo*100000;
 
 printf("Feet %f\n",feet);
 printf("centimetre %f\n",centimetre);
 printf("metre %f",metre);
 
 
    
}
