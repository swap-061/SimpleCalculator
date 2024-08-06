//Calculator program
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int menu;
    float num1, num2, result;

    printf("Enter a number from the list below\n\n");

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n\n");

    printf("Enter number: ");
    scanf("%d", &menu);

    printf("\n");

    switch(menu)
    {
    case 1:
        printf("You entered Addition\n\n");

        printf("Enter first number: ");
        scanf("%f", &num1);

        printf("Enter second number: ");
        scanf("%f", &num2);

        printf("\n");

        result = num1 + num2;

        printf("%.2f + %.2f = %.2f\n", num1, num2, result);
        break;
    case 2:
        printf("You entered Subtraction\n\n");

        printf("Enter first number: ");
        scanf("%f", &num1);

        printf("Enter second number: ");
        scanf("%f", &num2);

        printf("\n");

        result = num1 - num2;

        printf("%.2f - %.2f = %.2f\n", num1, num2, result);
        break;
    case 3:
        printf("You entered Multiplication\n\n");

        printf("Enter first number: ");
        scanf("%f", &num1);

        printf("Enter second number: ");
        scanf("%f", &num2);

        printf("\n");

        result = num1 * num2;

        printf("%.2f * %.2f = %.2f\n", num1, num2, result);
        break;
    case 4:
        printf("You entered Division\n\n");

        printf("Enter first number: ");
        scanf("%f", &num1);

        printf("Enter second number: ");
        scanf("%f", &num2);

        printf("\n");

        result = num1 / num2;

        printf("%.2f / %.2f = %.2f\n", num1, num2, result);
        break;
    default:
        printf("Enter correct number e.g 1 - 4\n");
        break;
    }
    return 0;
}

