//Q17 write a program to find the roots of a quadratic equation and categorize them .
#include<stdio.h>
#include<math.h>

int main() {
    float a, b, c, discriminant, root1, root2, real_part, imag_part;
    
    printf("Enter coefficients (a, b, c) for equation ax^2 + bx + c = 0:\n");
    printf("Enter a: ");
    scanf("%f", &a);
    printf("Enter b: ");
    scanf("%f", &b);
    printf("Enter c: ");
    scanf("%f", &c);
    
    // Check if it's a valid quadratic equation
    if (a == 0) {
        printf("\nError: 'a' cannot be zero. Not a quadratic equation!\n");
        return 1;
    }
    
    // Calculate discriminant
    discriminant = (b * b) - (4 * a * c);
    
    printf("\nEquation: %.2fx^2 + %.2fx + %.2f = 0\n", a, b, c);
    printf("Discriminant (b^2 - 4ac): %.2f\n\n", discriminant);
    
    // Categorize and find roots
    if (discriminant > 0) {
        // Two distinct real roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        
        printf("Category: Two Distinct Real Roots\n");
        printf("Root 1: %.2f\n", root1);
        printf("Root 2: %.2f\n", root2);
    }
    else if (discriminant == 0) {
        // One repeated real root
        root1 = -b / (2 * a);
        
        printf("Category: One Repeated Real Root (Equal Roots)\n");
        printf("Root: %.2f\n", root1);
    }
    else {
        // Complex roots
        real_part = -b / (2 * a);
        imag_part = sqrt(-discriminant) / (2 * a);
        
        printf("Category: Complex Conjugate Roots\n");
        printf("Root 1: %.2f + %.2fi\n", real_part, imag_part);
        printf("Root 2: %.2f - %.2fi\n", real_part, imag_part);
    }
    
    return 0;
}