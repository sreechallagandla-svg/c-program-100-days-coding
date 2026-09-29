//Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/
#include<stdio.h>
int main() {
    char str[100], rev[100];
    int len = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Calculate length of the string
    while(str[len] != '\0' && str[len] != '\n') {
        len++;
    }

    // Reverse the string
    for(int i = 0; i < len; i++) {
        rev[i] = str[len - 1 - i];
    }
    rev[len] = '\0'; // Null-terminate the reversed string

    printf("Reversed string: %s", rev);
    return 0;
}