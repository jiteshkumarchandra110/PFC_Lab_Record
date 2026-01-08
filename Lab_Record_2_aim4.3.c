#include <stdio.h>

int main() {
    int a, b, c, max;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Enter third number: ");
    scanf("%d", &c);

    // Using ternary operators 
    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    printf("The largest number is %d\n\n", max);
    printf("NAME:- Jitesh Kumar Chandra \n");
    printf("ERP ID.- RU-25-10626\n");
    return 0;
}
