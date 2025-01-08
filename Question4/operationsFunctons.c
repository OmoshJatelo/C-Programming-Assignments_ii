#include <stdio.h>

void printf_result(double result)
{
    printf("the result is %.3lf\n",result);
}  

void difference(double num2,double num1)
{
    double result=num1-num2;
    //printf("%lf subtracted from %lf is %lf\n",num1,num2,result);
    printf_result(result);
}
void sum(double num1, double num2)
{
    double result=num1+num2;
    //printf("the summation of %lf and %lf is %lf\n",num1,num2,result);
    printf_result(result);
}
void product(double num1, double num2)
{
    double result=num1*num2;
    //printf("the product of %lf and %lf is %lf\n",num1,num2,result);
    printf_result(result);
}
void quotient(double num1, double num2)
{
    if(num2==0)
    {
        printf("division by 0 is not possible\n");

    }
    else
    {
        double result=num1/num2;
        //printf(" %.3lf divided by %.3lf is %.5lf\n",num1,num2,result);
        printf_result(result);
    }
} 