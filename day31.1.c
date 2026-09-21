//Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/
#include<stdio.h>
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int searchElement;
    printf("Enter the element to search: ");
    scanf("%d", &searchElement);
    
    int index = -1;
    for(int i = 0; i < n; i++) {
        if(arr[i] == searchElement) {
            index = i;
            break;
        }
    }
    
    if(index != -1) {
        printf("Found at index %d\n", index);
    } else {
        printf("-1\n");
    }
    
    return 0;
}