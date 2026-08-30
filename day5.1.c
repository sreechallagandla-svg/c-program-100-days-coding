// Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.
#include<stdio.h>
#include<math.h>
int main() {
    float principal, rate, time;
    float simple_interest, compound_interest;
    printf("principal:");
    scanf("%f", &principal);
    printf("rate:");
    scanf("%f", &rate);
    printf("time:");
    scanf("%f", &time);

    simple_interest = (principal * rate * time) / 100;
    compound_interest = principal * pow(1 + rate / 100, time) - principal;

    printf("Simple interest: %.2f\n", simple_interest);
    printf("Compound interest: %.2f\n", compound_interest);
    return 0;
}