#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    // Compare and find the largest
    if (num1 > num2) {
        printf("%d is the largest number.\n\n", num1);
    } else if (num2 > num1) {
        printf("%d is the largest number.\n\n", num2);
    } else {
        printf("Both numbers are equal.\n\n");
    }
    printf("NAME:- Jitesh Kumar Chandra \n");
    printf("ERP ID.- RU-25-10626\n");
    return 0;
}
