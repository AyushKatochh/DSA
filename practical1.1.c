/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>		//header file

void
main ()
{
  int a, b, add, sub, mul;	// declarations
  float divi, mod;

  printf ("enter two number\n");
  scanf ("%d%d", &a, &b);

  add = a + b;
  sub = a - b;
  mul = a * b;
  divi = a / b;
  mod = a % b;

  printf ("addition of %d and %d = %d\n", a, b, add);
  printf ("subtraction of %d and %d = %d\n", a, b, sub);
  printf ("Multiplication of %d and %d = %d\n", a, b, mul);
  printf("division of %d and %d=%f\n",a,b,divi);
  printf("modulas of %d and %d=%f",a,b,mod);
    
}
