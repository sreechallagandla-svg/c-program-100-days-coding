//Q4 write a program to calculate the area and circumference of a circle given its radius
#include<stdio.h>
int main() {
    float pie = 3.12f;
    float radius;
    float circumference, area;
    printf("Enter radius: ");
    scanf("%f", &radius);
    circumference = 2 * pie * radius;
     area = pie * radius * radius;

    printf("Area: %.2f\n", area);
    printf("Circumference: %.2f\n", circumference);

}