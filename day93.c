//Q143: Find and print the student with the highest marks.

/*
Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

*/
#include <stdio.h>

int main() {
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    char name[100][20];
    int id[100];
    int marks[100];

    for (int i = 0; i < n; i++) {
        printf("Enter name, id and marks: ");
        scanf("%19s %d %d", name[i], &id[i], &marks[i]);
    }

    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (marks[i] > marks[maxIndex]) {
            maxIndex = i;
        }
    }

    printf("Topper: %s (Marks: %d)\n", name[maxIndex], marks[maxIndex]);

    return 0;
}