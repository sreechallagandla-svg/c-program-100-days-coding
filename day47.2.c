//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include<stdio.h>
#include<string.h>

for (i = 0; i < length; i++) {
        dest[i] = src[i];
    }
    dest[length] = '\0';
}    int i;
    

int main() {
    char str[100], longest[100];
    longest[0] = '\0';
    int i = 0, j = 0, maxLength = 0, currentLength = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n') {
            currentLength++;
        } else {
            if (currentLength > maxLength) {
                maxLength = currentLength;
                copyWord(longest, &str[i - currentLength], currentLength);
            }
            currentLength = 0;
        }
        i++;
    }

    // Check for the last word
    if (currentLength > maxLength) {
        maxLength = currentLength;
        copyWord(longest, &str[i - currentLength], currentLength);
    }

    printf("Longest word: %s\n", longest);
    return 0;
}