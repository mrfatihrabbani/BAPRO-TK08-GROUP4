#include <stdio.h>

float Substraction(float Num1, float Num2);

int main ()
{
    float Num1, Num2, Result;
    int choice;
    printf("Calculator by Group 4\n");
    printf("1st Number: ");
    scanf("%f", &Num1);
    printf("2nd Number: ");
    scanf("%f", &Num2);
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    switch (choice)
    {
        case 1:
        break;
        case 2:
        Result = Substraction(Num1, Num2);
        break;
        case 3:
        Result = Num1 * Num2;
        break;
        case 4:
        break;
        default:
        printf("Select (1-4): ");
        scanf("%d", &choice);
        break;
    }
    printf("Result: %.2f", Result);
    return 0;
}

float Substraction(float Num1, float Num2)
{
    return Num1-Num2;
}