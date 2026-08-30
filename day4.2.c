//Q8 write a program to find and display the sum of the first n natural numbers .
#include<stdio.h>
int main() {
    int n;
    int sum =0;
    printf("Enter n: ");
    scanf("%d", &n);
    sum = n * (n + 1) / 2;
    printf("Sum = %d\n", sum);
    return 0;
}
    

