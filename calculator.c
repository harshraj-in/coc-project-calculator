#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void menu() {
    printf("\n=============================\n");
    printf("      SCIENTIFIC CALCULATOR  \n");
    printf("=============================\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus (Remainder)\n");
    printf("6. Power (x^y)\n");
    printf("7. Square Root\n");
    printf("8. Exit\n");
    printf("=============================\n");
}

int main() {
    int choice;
    double num1, num2, result;

    while (1) {
        menu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 + num2;
                printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
                break;

            case 2:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 - num2;
                printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
                break;

            case 3:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 * num2;
                printf("Result: %.2lf × %.2lf = %.2lf\n", num1, num2, result);
                break;

            case 4:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %.2lf ÷ %.2lf = %.2lf\n", num1, num2, result);
                } else {
                    printf("Error! Division by zero.\n");
                }
                break;

            case 5:
                printf("Enter two integers: ");
                int a, b;
                scanf("%d %d", &a, &b);
                if (b != 0)
                    printf("Result: %d %% %d = %d\n", a, b, a % b);
                else
                    printf("Error! Division by zero.\n");
                break;

            case 6:
                printf("Enter base and exponent: ");
                scanf("%lf %lf", &num1, &num2);
                result = pow(num1, num2);
                printf("Result: %.2lf ^ %.2lf = %.2lf\n", num1, num2, result);
                break;

            case 7:
                printf("Enter number: ");
                scanf("%lf", &num1);
                if (num1 >= 0) {
                    result = sqrt(num1);
                    printf("Result: √%.2lf = %.2lf\n", num1, result);
                } else {
                    printf("Error! Negative number.\n");
                }
                break;

            case 8:
                printf("\nThank you for using the calculator!\n");
                exit(0);
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

        printf("\n-------------------------------------\n");
    }

    return 0;
}
