#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1, num2, result;
    char operation;

    // Creating infinite loop
    while (1)
    {
        // Printing the operator menu
        printf("Character\t Operation\n a\t\t add\n s\t\t subtract\n m\t\t multiply\n d\t\t divide\n");

        // Prompting the user for inputs
        printf("Enter your first number followed by an operation character followed by your second number: ");
        scanf("%lf %c %lf", &num1, &operation, &num2);

        // Operator selection switching
        switch (operation)
        {
            case 'a':
                result = add(num1, num2);
                printf_result(result);
                break;
            case 's':
                result = subtract(num1, num2);
                printf_result(result);
                break;
            case 'm':
                result = multiply(num1, num2);
                printf_result(result);
                break;
            case 'd':
                result = divide(num1, num2);
                if (num2 != 0)
                {
                    printf_result(result);
                }
                break;
            default:
                printf("Invalid operation.\n");
                break;
        }
    }

    return 0;
}