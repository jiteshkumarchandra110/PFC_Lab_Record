#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    // Display before swapping
    printf("\nBefore swapping: a = %d, b = %d\n", a, b);
    // Swap the numbers using a temporary variable
    c = a;
    a = b;
    b = c;
    // Display after swapping
    printf("After swapping:  a = %d, b = %d\n\n", a, b);
    printf("NAME:- Jitesh Kumar Chandra \n");
    printf("ERP ID.- RU-25-10626\n");
    return 0;
}
