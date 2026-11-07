//Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number

/*
Sample Test Cases:
Input 1:
nums1 = [0,3,2,4]
Output 1:
1

Input 2:
nums1 = [1,2,3]
Output 2:
0

Input 3:
nums1 = [0,4,3,1,5]
Output 3:
2

*/
#include<stdio.h>
int main() {
    int n;
    if (scanf("%d", &n) != 1) {
        return 0;
    }

    int nums[n - 1];
    for (int i = 0; i < n - 1; i++) {
        if (scanf("%d", &nums[i]) != 1) {
            return 0;
        }
    }

    int total_sum = n * (n - 1) / 2; // Sum of first n-1 natural numbers
    int array_sum = 0;

    for (int i = 0; i < n - 1; i++) {
        array_sum += nums[i];
    }

    int missing_number = total_sum - array_sum;
    printf("%d\n", missing_number);

    return 0;
}