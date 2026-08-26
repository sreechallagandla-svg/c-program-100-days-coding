//Q7 write a program to swap two numbers without using a third variable .
#include<stdio.h>
int main() {
    float number1,number2;
    printf("Enter number1:");
    scanf("%f",&number1);
    printf("Enter number2: ");
    scanf("%f",&number2);
    printf("Before swap:");
    printf("\n%.0f %.0f ",number1,number2);
    number = number1;
    number1 = number2;
    number2 = number;
    printf("After swap:%.0f %.0f",number1,number2 );
    
    return 0;
}