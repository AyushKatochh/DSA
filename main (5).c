#include <stdio.h>
#include <stdlib.h>
int subNum(float a, float b);
int mulNum(float a, float b);
int divNum(float a, float b);
int main()
{
    float result,result1,result2,num1,num2;
    printf("Enter two numbers to subtract, multiply and divide\n");
    scanf("%f%f",&num1,&num2);
    result=subNum(num1,num2);
    result1 = mulNum(num1, num2);
    result2 = divNum(num1,num2);
     printf("subtraction of given two numbers:%.3f\n",result);
     printf("multiplication of given two numbers:%.3f\n",result1);
     printf("Division of given two numbers:%.3f",result2);
     
    return 0;
}
int subNum(float x, float y)
{
    float c=x-y;
    return (c);
}

int mulNum(float x, float y)
{
    float c=x*y;
    return (c);
}
int divNum(float x, float y)
{
    float c=x/y;
    return (c);
}