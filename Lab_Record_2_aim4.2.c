#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Enter third number: ");
    scanf("%d", &c);
    
    // Using nested if statements to find the maximum
    if (a > b) {
        if (a > c) {
            printf("%d is the largest number.\n\n", a);
        } else {
            printf("%d is the largest number.\n\n", c);
        }
    } else {
        if (b > c) {
            printf("%d is the largest number.\n\n", b);
        } else {
            printf("%d is the largest number.\n\n", c);
        }
    }
    printf("NAME:- Jitesh Kumar Chandra \n");
    printf("ERP ID.- RU-25-10626\n");
    return 0;
}
