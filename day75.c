//Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

/*
Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/
#include<stdio.h>
int main() {
    char filename[100];
    printf("Enter file name: ");
    scanf("%s", filename);

    FILE *file = fopen(filename, "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 0;
    }

    char text[100];
    printf("Enter text to append: ");
    scanf(" %[^\n]s", text); // Read a line of text including spaces

    fprintf(file, "%s\n", text);
    fclose(file);

    printf("File updated successfully with appended text.\n");
    return 0;
}