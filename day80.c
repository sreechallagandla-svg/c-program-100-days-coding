//Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

/*
Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    FILE *fp;
    struct Student students[2];
    struct Student temp;
    int i;

    printf("Enter details for 2 students:\n");
    for (i = 0; i < 2; i++) {
        printf("Student %d\n", i + 1);
        printf("Name: ");
        scanf("%49s", students[i].name);
        printf("Roll: ");
        scanf("%d", &students[i].roll);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        perror("Error opening file for writing");
        return 1;
    }

    for (i = 0; i < 2; i++) {
        fprintf(fp, "%s %d %.2f\n", students[i].name, students[i].roll, students[i].marks);
    }
    fclose(fp);

    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        perror("Error opening file for reading");
        return 1;
    }

    printf("Student records:\n");
    while (fscanf(fp, "%49s %d %f", temp.name, &temp.roll, &temp.marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %.0f\n",
               temp.name,
               temp.roll,
               temp.marks);
    }

    fclose(fp);
    return 0;
}  