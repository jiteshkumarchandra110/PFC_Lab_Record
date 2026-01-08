#include <stdio.h>
int main() {
    char op;
    int num1, num2;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &op);
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    switch (op) {
        case '+':
            printf("Result: %d\n\n", num1 + num2);
            break;
        case '-':
            printf("Result: %d\n\n", num1 - num2);
            break;
        case '*':
            printf("Result: %d\n\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("Result: %d\n\n", num1 / num2);
            else
                printf("Error: Division by zero!\n\n");
            break;
        default:
            printf("Invalid operator!\n\n");
    }
    printf("NAME:- Jitesh Kumar Chandra \n");
    printf("ERP ID.- RU-25-10626\n");
    return 0;
}
