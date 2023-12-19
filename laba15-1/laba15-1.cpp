#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("num1 > num2 - true: %d\n", num1);
    }
    else {
        printf("num1 > num2 - false: %d and %d\n", num1, num2);
    }

    return 420;
}