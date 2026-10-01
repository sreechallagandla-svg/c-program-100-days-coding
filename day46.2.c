//Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include<stdio.h>
int main(){
    char str[100];
    int freq[26] = {0}; // Frequency array for lowercase alphabets
    printf("Enter a string: ");
    scanf("%s", str);

    // Count frequency of each character
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;
        }
    }

    // Find the first repeating character
    char firstRepeating = '\0';
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z' && freq[str[i] - 'a'] > 1) {
            firstRepeating = str[i];
            break;
        }
    }

    if (firstRepeating != '\0') {
        printf("First repeating lowercase alphabet: %c\n", firstRepeating);
    } else {
        printf("No repeating lowercase alphabet found.\n");
    }

    return 0;
}