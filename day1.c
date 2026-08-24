//Q.1 write a program to input two numbers and display their sum .
#include <stdio.h>

int main() {
    int number1, number2, sum;

    printf("Enter number1: ");
    scanf("%d", &number1);

    printf("Enter number2: ");
    scanf("%d", &number2);

    sum = number1 + number2;
    printf("Sum of two numbers: %d\n", sum);

    return 0;
}
