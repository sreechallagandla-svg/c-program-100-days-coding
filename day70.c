//Q120: Write a program to take a string input. Change it to sentence case.

/*
Sample Test Cases:
Input 1:
str = I am trying to build logic.
Output 1:
I Am Trying To Build Logic

Input 2:
str = The classes are supposed to start early.
Output 2:
The Classes Are Supposed To Start Early.

Input 3:
str = We are going to look at 26 different test cases.
Output 3:
We Are Going To Look At 26 Different Test Cases.

*/
#include<stdio.h>
int main() {
    char str[1000];
    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 0;
    }

    int i = 0;
    int capitalize_next = 1; // Flag to indicate if the next character should be capitalized

    while (str[i] != '\0') {
        if (capitalize_next && ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))) {
            // Capitalize the character
            if (str[i] >= 'a' && str[i] <= 'z') {
                str[i] = str[i] - ('a' - 'A'); // Convert to uppercase
            }
            capitalize_next = 0; // Reset the flag after capitalizing
        } else if (str[i] == ' ') {
            capitalize_next = 1; // Set the flag to capitalize the next character
        }
        i++;
    }

    printf("%s", str);
    return 0;
}