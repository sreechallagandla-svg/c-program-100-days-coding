//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include<stdio.h>
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    // Handle negative numbers
    if(num < 0) {
        num = -num;
    }
    
    // Array to store frequency of each digit
    int freq[10] = {0};
    
    // Calculate frequency of each digit
    while(num > 0) {
        int digit = num % 10;
        freq[digit]++;
        num /= 10;
    }
    
    // Find the digit with maximum frequency
    int maxFreq = 0;
    int maxDigit = -1;
    for(int i = 0; i < 10; i++) {
        if(freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxDigit = i;
        }
    }
    
    printf("Digit that occurs the most times: %d\n", maxDigit);
    
    return 0;
}