#include<stdio.h>
int main() {
    float num1, num2, result;
    int choice;

    printf("ENTER FIRST NUMBER\n");
    scanf("%f", &num1);

    printf("ENTER SECOND NUMBER\n");
    scanf("%f", &num2);

    printf("\nCHOOSE AN OPERATION: \n");
    printf("1. ADDITION\n");
    printf("2. SUBTRACTION\n");
    printf("3. MULTIPLICATION\n");
    printf("4. DIVISION\n");
    printf("ENTER YOUR CHOICE");

    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        result = num1 + num2;
        printf("RESULT = %.2f\n", result);
        break;

    case 2:
        result = num1 - num2;
        printf("RESULT = %.2f\n", result);
        break;

    case 3:
        result = num1 * num2;
        printf("RESULT = %.2f\n", result);
        break;

    case 4:
        if(num2 != 0) {
            result = num1 + num2;
            printf("RESULT = %.2f\n", result);
        } else {
            printf("ERROR: DIVISION ZERO IS NOT ALLOWED\n");
        }
        break;
    default:
        printf("INVALID CHOICE");
    }

return 0;



}