#include <stdio.h>
int main() {
    int a;
    float b;
    char c;
    double d;
    
    printf("Enter an integer value: ");
    scanf("%d", &a);
    printf("Enter a float value: ");
    scanf("%f", &b);
    printf("Enter a double value: ");
    scanf("%lf", &d);
    getchar();
    printf("Enter a character: ");
    scanf("%c", &c);
    // Output the values
    printf("\nYou entered:\n");
    printf("Integer: %d\n", a);
    printf("Float: %.2f\n", b);
    printf("Double: %.4lf\n", d);
    printf("Character: %c\n\n", c);
    printf("NAME:- Jitesh Kumar Chandra \n");
    printf("ERP ID.- RU-25-10626\n");
    return 0;
}
