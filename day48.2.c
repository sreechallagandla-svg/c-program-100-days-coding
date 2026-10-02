//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include<stdio.h>
int main(){
    char str[100];
    int i = 0, start, end;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        // Skip spaces
        while (str[i] == ' ' && str[i] != '\0') {
            i++;
        }
        start = i;

        // Find the end of the word
        while (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            i++;
        }
        end = i - 1;

        // Reverse the word
        while (start < end) {
            char temp = str[start];
            str[start] = str[end];
            str[end] = temp;
            start++;
            end--;
        }
    }

    printf("Reversed words: %s\n", str);
    return 0;
    }