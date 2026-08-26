//Q5 write a program to convert temperature from celsius to fahrenheit.
#include<stdio.h>
int main() {
    float celsius, fahrenheit;
    printf("Enter temperature in celsius:");
    scanf("%f", &celsius);
    fahrenheit = celsius * 9 / 5 + 32;
    printf("fahrenheit :%.2f", fahrenheit);
    return 0;
}