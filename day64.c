//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
#include<stdio.h>
int main() {
    char s[1000];
    if (scanf("%s", s) != 1) {
        return 0;
    }

    int max_length = 0;
    int start = 0;
    int last_index[256] = { -1 }; // Assuming ASCII character set

    for (int end = 0; s[end] != '\0'; end++) {
        if (last_index[(unsigned char)s[end]] >= start) {
            start = last_index[(unsigned char)s[end]] + 1;
        }
        last_index[(unsigned char)s[end]] = end;
        if (end - start + 1 > max_length) {
            max_length = end - start + 1;
        }
    }

    printf("%d\n", max_length);
    return 0;
}