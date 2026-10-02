//Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/
#include<stdio.h>
int main(){
    char str1[100], str2[100];
    int i, j, len1 = 0, len2 = 0, isRotation = 0;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Calculate lengths of both strings
    while (str1[len1] != '\0' && str1[len1] != '\n') len1++;
    while (str2[len2] != '\0' && str2[len2] != '\n') len2++;

    // Check if lengths are equal
    if (len1 != len2) {
        printf("Not rotation\n");
        return 0;
    }

    // Check for rotation
    for (i = 0; i < len1; i++) {
        isRotation = 1;
        for (j = 0; j < len1; j++) {
            if (str1[j] != str2[(i + j) % len1]) {
                isRotation = 0;
                break;
            }
        }
        if (isRotation) {
            printf("Rotation\n");
            return 0;
        }
    }

    printf("Not rotation\n");
    return 0;
}