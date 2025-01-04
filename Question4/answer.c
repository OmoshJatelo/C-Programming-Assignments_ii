#include <stdio.h>
#include <stdlib.h>


int add();
int subtract();
int multiply();
int divide();
void solution();

int main()
{
    int a;
    int b;
    char choice ;
    int intChoice ;

    while(1)
    {
        printf("enter a number \n");
        scanf("%d", &a);
        printf("enter another number \n");
        scanf("%d", &b);

        do
        {
            printf("enter 'a' to add 's' to subtract 'm' to multiply 'd' to divide \n");
            scanf("%c", &choice);
        }
        while(choice != 'a' && choice != 's' && choice != 'm' && choice != 'd');
        intChoice = (int)choice ;

        if(choice != 'd')
        {
            solution(intChoice, a, b, add, subtract, multiply);
        }
        else
        {
            double answer = (double)a/b ;
            printf("the answer is %f \n", answer);
        }
    }

    return 0;
}

int add(int a, int b)
{
    return a + b ;
}

int subtract(int a, int b)
{
    return a - b ;
}

int multiply(int a, int b)
{
    return a * b ;
}


void solution (int intChoice, int a, int b, int(*add)(int, int), int(*subtract)(int, int), int(*multiply)(int, int))
{
    char choice = (char)intChoice ;
    int answer ;
    if(choice == 'a')
    {
        answer = add(a, b);
    }
    else if(choice == 's')
    {
        answer = subtract(a, b);
    }
    else if(choice == 'm')
    {
        answer = multiply(a, b);
    }

    printf("the answer is %d \n", answer);

}
