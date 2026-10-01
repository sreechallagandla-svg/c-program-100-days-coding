//Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/
#include<stdio.h>
#include "day45.1.h"
int main()
{
    return NewFunction();
}
int NewFunction()
{

    char str[100], ch;
    int count = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Enter a character to count: ");
    scanf(" %c", &ch);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            count++;
        }
    }

    printf("Frequency of '%c' in \"%s\" is: %d\n", ch, str, count);
    return 0;
}