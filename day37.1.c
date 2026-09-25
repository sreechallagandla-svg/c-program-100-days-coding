//Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/
#include<stdio.h>
int main() {
    int m, n;
    printf("Enter the dimensions of the matrix (rows columns): ");
    scanf("%d %d", &m, &n);

    int matrix[m][n];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int rowSums[m];
    for (int i = 0; i < m; i++) {
        rowSums[i] = 0;
        for (int j = 0; j < n; j++) {
            rowSums[i] += matrix[i][j];
        }
    }

    printf("The sum of each row is:\n");
    for (int i = 0; i < m; i++) {
        printf("%d ", rowSums[i]);
    }
    printf("\n");

    return 0;
}