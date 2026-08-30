//Q14 write a program to input a charecterband check whether it is a vowel or consonant using if-else .
#include<stdio.h>
int main() {
    char charecter;
    printf("Enter a charecter:");
    scanf("%c", &charecter);
    if(charecter == 'a' || charecter == 'e' || charecter == 'i' || charecter == 'o' || charecter == 'u' ||
       charecter == 'A' || charecter == 'E' || charecter == 'I' || charecter == 'O' || charecter == 'U') {
        printf("%c is a vowel\n", charecter);
    }
    else {
        printf("%c is a consonant\n", charecter);
    }
    return 0;
}