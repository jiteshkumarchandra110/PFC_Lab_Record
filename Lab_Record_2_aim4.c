#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);
    // Check if even or odd
    if (num % 2 == 0) {
        printf("%d is an even number.\n\n", num);
    } else {
        printf("%d is an odd number.\n\n", num);
    }
    printf("NAME:- Jitesh Kumar Chandra \n");
    printf("ERP ID.- RU-25-10626\n");
    return 0;
}
