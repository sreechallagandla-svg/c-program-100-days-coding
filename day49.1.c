//Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/
#include<stdio.h>
int main() {
    char name[100];
    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);

    int i = 0;
    while (name[i] != '\0') {
        // Print the first character of each word
        if (i == 0 || (name[i - 1] == ' ' && name[i] != ' ' && name[i] != '\n')) {
            printf("%c.", name[i]);
        }
        i++;
    }

    printf("\n");
    return 0;
}