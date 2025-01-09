#include <stdio.h>
#include <stdlib.h>

double get_e_power_x(int terms, double x)
{
    double result=1.0;
    double factorial=1.0;
    double numerator=1.0;

    for( int n=1;n<terms;n++)
    {
        factorial*=n;
        numerator*=x;
        result+=numerator/factorial;

    }
    return result;
}

int main()
{
    double x, output;
    int terms;
    printf("enter the number x:\n");
    scanf("%lf",&x);
    printf("enter the number of terms:\n");
    scanf("%d",&terms);
    output=get_e_power_x( terms,x);
    printf("e raised to power %lf  expanded to the %dth term is approximately %lf",x,terms,output);
    return 0;
