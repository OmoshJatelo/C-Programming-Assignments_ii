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
      

int main()
{
    double num1,num2;
    char operator;
    char menu[5][30]={
        "Letter     Meaning\n",
        "a          addition\n",
        "s          subtraction\n",
        "m          multiplication\n",
        "d          division\n"
    };
    for(int n=0;n<5;n++)
        printf("%s",menu[n]);

    printf("enter two  numbers:\n");
    scanf("%lf%lf",&num1,&num2); 
    printf("select an operator from the menu above:\n");  
    scanf(" %c",&operator);
    switch(operator)
    {
        case 'a':
        sum(num1,num2);
        break;

        case 's':
        difference(num2,num1);
        break;

        case 'm':
        product(num1,num2);
        break;

        case 'd':
        quotient(num1,num2);
        break;

        default:
        printf("please ensure you enter two integer numbers and a valid operator;either a, b, c or d\n");
        
    }
    

    return 0;
}
