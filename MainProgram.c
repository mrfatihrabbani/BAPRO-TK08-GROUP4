#include <stdio.h>

int main ()
{
    float Num1, Num2, Result;
    int choice;
    printf("Calculator by Group 4\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    switch (choice)
    {
        case 1:
        break;
        case 2:
        break;
        case 3:
        printf("scanf %f %f", &Num1, Num2);
        Result = Num1 * Num2;
        printf("Result: %.2f\n", Result);
        break;
        case 4:
        break;
        default:
        printf("Select (1-4): ");
        scanf("%d", &choice);
        break;
    }
    return 0;
}