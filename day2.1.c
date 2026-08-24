//Q3 write a program to calculate the area  and perimeter of a rectangle given its length and breadth .
#include <stdio.h>

int main() {
    float length, breadth, area, perimeter;

    printf("Enter length: ");
    scanf("%f", &length);

    printf("Enter breadth: ");
    scanf("%f", &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("Area of rectangle: %.2f\n", area);
    printf("Perimeter of rectangle: %.2f\n", perimeter);

    return 0;
}