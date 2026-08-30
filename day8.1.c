//Q15 writea program to input a charecter and check whether it is an uppercase alphabet , lowercase alphabet , digit, or special charecter .
#include<stdio.h>
int main() {
    char charecter;
    printf("Enter a charecter:");
    scanf("%c",&charecter);
    if(charecter >= 'A' && charecter <= 'Z')
      {  printf("%c is an uppercase alphabet\n", charecter);}

    else if(charecter >= 'a' && charecter <= 'z')
      {  printf("%c is a lowercase alphabet\n", charecter); }

    else if(charecter >= '0' && charecter <= '9')
      {  printf("%c is a digit\n", charecter); }

    else
      {  printf("%c is a special character\n", charecter);
    
         }
            return 0;
}