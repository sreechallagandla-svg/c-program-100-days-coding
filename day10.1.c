//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include<stdio.h>
int main() {
    int a,b,c;
    printf("Enter the three values:");
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && b==c)
    {
        printf("Equilateral triangle");
    }
    if(a==b || b==c || c==a)
    {
        printf("Isosceles triangl");
    }
    else{
        printf("scalene triangle");
    }
    return 0;
}