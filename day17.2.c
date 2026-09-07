//Q34: Write a program to check if a number is prime.
#include<stdio.h>
int main(){
     int num, i , flag = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(i = 2; i <= num/2; ++i) {
        if(num % i == 0) {
            flag = 1;
            break;
        }
    }
    if(flag == 0) {
        printf("Prime");
    } else {
        printf("Not prime");
    }
    return 0;
}