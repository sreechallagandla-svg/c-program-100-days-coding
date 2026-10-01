//Q90: Toggle case of each character in a string.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO

*/
#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32; // Convert to uppercase
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32; // Convert to lowercase
        }
    }

    printf("Toggled string: %s\n", str);
    return 0;
}