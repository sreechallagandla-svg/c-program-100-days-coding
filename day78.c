//Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

/*
Sample Test Cases:
Input 1:
File: text.txt (Content: Welcome to C language)
Output 1:
Vowels: 8
Consonants: 10

*/
#include <stdio.h>
#include <ctype.h>
int main() {
    char filename[100];
    printf("Enter filename: ");
    if (scanf("%99s", filename) != 1) {
        return 1;
    }

    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Could not open %s for reading.\n", filename);
        return 1;
    }                           

    int vowels = 0;
    int consonants = 0;
    int ch;
    while ((ch = fgetc(file)) != EOF) {
        if (isalpha((unsigned char)ch)) {
            int letter = tolower((unsigned char)ch);
            if (letter == 'a' || letter == 'e' || letter == 'i' ||
                letter == 'o' || letter == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    fclose(file);
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    return 0;
}