//Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/
#include<stdio.h>
int main()
{
    char str1[100], str2[100];
    int freq[26] = {0};
    int i, j;

    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    // Count frequency of each character in first string
    for (i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] >= 'a' && str1[i] <= 'z')
        {
            freq[str1[i] - 'a']++;
        }
    }

    // Decrease frequency for each character in second string
    for (i = 0; str2[i] != '\0'; i++)
    {
        if (str2[i] >= 'a' && str2[i] <= 'z')
        {
            freq[str2[i] - 'a']--;
        }
    }

    // Check if all frequencies are zero
    for (i = 0; i < 26; i++)
    {
        if (freq[i] != 0)
        {
            break;
        }
    }

    if (i == 26)
    {
        printf("Anagrams\n");
    }
    else
    {
        printf("Not anagrams\n");
    }

    return 0;
}