#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* result = (int*)malloc(2 * sizeof(int));  // Allocate memory for the result array

    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;  // Return the dynamically allocated array
            }
        }
    }

    free(result);  // Free the memory if no solution is found
    *returnSize = 0;
    return NULL;
}

int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int returnSize;
    int* result = twoSum(nums, sizeof(nums) / sizeof(nums[0]), target, &returnSize);

    if (returnSize == 2) {
        printf("Indices: %d %d\n", result[0], result[1]);
        free(result);  // Free the dynamically allocated memory
    } else {
        printf("No solution found.\n");
    }

    return 0;
}
