//Q105: Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.

/*
Sample Test Cases:
Input 1:
nums = [3,2,3]
Output 1:
3

Input 2:
nums = [2,2,1,1,1,2,2]
Output 2:
2

Input 3:
nums = [2,2,1,1,1,2,2,3]
Output 3:
-1

*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int *values = NULL;
	int capacity = 0;
	int count = 0;
	int value;

	while (scanf("%d", &value) == 1) {
		if (count == capacity) {
			int new_capacity = capacity == 0 ? 16 : capacity * 2;
			int *new_values = realloc(values, (size_t)new_capacity * sizeof(*new_values));
			if (new_values == NULL) {
				free(values);
				return 1;
			}
			values = new_values;
			capacity = new_capacity;
		}
		values[count++] = value;
	}

	if (count == 0) {
		printf("-1\n");
		return 0;
	}

	int n = count;
	int *nums = values;

	if (count > 1 && values[0] > 0 && values[0] == count - 1) {
		n = values[0];
		nums = values + 1;
		if (n <= 0 || count - 1 != n) {
			free(values);
			printf("-1\n");
			return 0;
		}
	}

	int candidate = 0;
	int freq = 0;
	for (int i = 0; i < n; i++) {
		if (freq == 0) {
			candidate = nums[i];
			freq = 1;
		} else if (nums[i] == candidate) {
			freq++;
		} else {
			freq--;
		}
	}

	freq = 0;
	for (int i = 0; i < n; i++) {
		if (nums[i] == candidate) {
			freq++;
		}
	}

	printf("%d\n", freq > n / 2 ? candidate : -1);
	free(values);
	return 0;
}
