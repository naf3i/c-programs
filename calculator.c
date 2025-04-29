#include <stdio.h>

int main() {
    int choice;
    double a, b;

    printf("Simple Calculator\n");
    printf("-----------------\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);

    switch(choice) {
        case 1:
            printf("%.2lf + %.2lf = %.2lf\n", a, b, a + b);
            break;
        case 2:
            printf("%.2lf - %.2lf = %.2lf\n", a, b, a - b);
            break;
        case 3:
            printf("%.2lf * %.2lf = %.2lf\n", a, b, a * b);
            break;
        case 4:
            if(b != 0)
                printf("%.2lf / %.2lf = %.2lf\n", a, b, a / b);
            else
                printf("Division by zero is not allowed.\n");
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
