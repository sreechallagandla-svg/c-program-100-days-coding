#include<stdio.h>

int main(void) {
    int size, target;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int nums[size];

    printf("Enter %d numbers: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter the target: ");
    scanf("%d", &target);

    // Hash map to store seen values and their indices
    int hashMap[100] = {0}; // Assumes numbers are in the range 0-99

    for (int i = 0; i < size; i++) {
        int complement = target - nums[i];

        if (hashMap[complement] != 0) {
            printf("[%d, %d]\n", hashMap[complement] - 1, i);
            return 0;
        }

        hashMap[nums[i]] = i + 1; // Store index + 1 to avoid zero as a valid value
    }

    printf("No valid pair found.\n");
    return 0;
}