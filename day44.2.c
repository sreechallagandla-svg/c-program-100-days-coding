//Q88: Replace spaces with hyphens in a string.

/*
Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/
#include<stdio.h>
int main() {
    char str[100];
    int len = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Calculate length of the string
    while(str[len] != '\0' && str[len] != '\n') {
        len++;
    }

    // Replace spaces with hyphens
    for(int i = 0; i < len; i++) {
        if(str[i] == ' ') {
            str[i] = '-';
        }
    }

    printf("Modified string: %s", str);
    return 0;
}