//Q6 write a program to swap two numbers using a third variable .
#include<stdio.h>
int main() {
    float number1,number2;
    printf("Enter number1: ");
    scanf("%f",&number1);
    printf("Enter number2: ");
    scanf("%f",&number2);
    float number;
    number = number1;
    printf("Befor swap %.0f %.0f ",number1 ,number2);
    number1 = number2;
    number2 = number;
    printf("After swap  %.0f %.0f",number1,number2);
    return 0;
}