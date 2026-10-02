//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include<stdio.h>
int main() {
    char name[100];
    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);

    int i = 0;
    int firstWord = 1; // Flag to check if it's the first word
    while (name[i] != '\0') {
        // Print the first character of each word except the last one
        if (name[i] != ' ' && name[i] != '\n') {
            if (firstWord) {
                printf("%c.", name[i]);
                firstWord = 0;
            }
        } else {
            // Check if it's the last word
            if (name[i + 1] != '\0' && name[i + 1] != ' ' && name[i + 1] != '\n') {
                printf("%c.", name[i + 1]);
            } else {
                // Print the surname in full
                while (name[i + 1] != '\0' && name[i + 1] != ' ' && name[i + 1] != '\n') {
                    i++;
                    printf("%c", name[i]);
                }
                break; // Exit after printing the surname
            }
        }
        i++;
    }

    printf("\n");
    return 0;
}