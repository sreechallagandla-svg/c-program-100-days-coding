//Q16  write a program to input three numbers and find the the largest among them using if-else .
#include<stdio.h>
int main() {
    int a,b,c;
    printf("enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("a is the largest number");
    }
    else if(b>c)
    {
        printf("b is the largest number");
    }
    else
    {
        printf("c is the largest number");
    }
    return 0;
}
