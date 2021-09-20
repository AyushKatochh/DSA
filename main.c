/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// Structure of C program
// Start the documentation

// Link Section or pre-processing part
#include<stdio.h>

int a=10; //global declaration
int main() // main function
{
    int b=3; // local declaration
    
    printf("b=%d\n", b); //executable part
   
    
    func(); // calling to the function
}

// user defined functions that can exist

void func()
{
    printf("hello world\n");
     printf("a=%d\n", a);
}