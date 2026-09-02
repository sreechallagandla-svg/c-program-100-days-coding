//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include<stdio.h>
int main() {
    int a, b;
    char operator;
    printf("Enter two numbers and an operator (+, -, *, /, %): ");
    scanf("%d %d %c", &a, &b, &operator);
    switch(operator) {
        case '+':
            printf("Result: %d\n", a + b);
            break;
        case '-':
            printf("Result: %d\n", a - b);
            break;
        case '*':
            printf("Result: %d\n", a * b);
            break;
        case '/':
            printf("Result: %d\n", a / b);
            break;
        case '%':
            printf("Result: %d\n", a % b);
            break;
        default:
            printf("Invalid operator!\n");
    }
    return 0;
}