//Q2 write a program to input two numbers and display their sum,difference,productand quotient .
#include<stdio.h>
int main() {
    int num1,num2,sum,difference,product,quotient;
    printf("Enter num1:");
    scanf("%d",&num1);
    printf("Enter num2:");
    scanf("%d",&num2);
    sum=num1+num2;
    difference=num1-num2;
    product=num1*num2;
    quotient=num1/num2;
    printf("sum of two numbers :%d",sum);
    printf("\ndifference of two numbers :%d",difference);
    printf("\nproduct of two numbers :%d",product);
    printf("\nquotient of two numbers :%d",quotient);
    return 0;
}