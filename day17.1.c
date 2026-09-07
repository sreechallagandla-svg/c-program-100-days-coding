//Q33: Write a program to check if a number is an Armstrong number.
#include<stdio.h>
int main(){
    int num, original, remainder, result = 0, n = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;
    while(num != 0) {
        remainder = num % 10;
        result = result + remainder * remainder * remainder;
        num = num / 10;
    }
    if(original == result) {
        printf("Armstrong");
    } else {
        printf("Not Armstrong");
    }
    return 0;
}